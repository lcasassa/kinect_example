#include "thread.h"
#include <QDebug>

//#include <stdio.h>
#include <math.h>

#include <cv.h>
#include <highgui.h>
using namespace cv;

#include <XnOS.h>
#include <XnCppWrapper.h>
using namespace xn;

#define SAMPLE_XML_PATH "SamplesConfig.xml"

#define KINECT 1

Thread::Thread(QObject *parent) : QThread(parent) {

    qWarning("constructor");
    inrange_lower = Qt::black;
    inrange_upper = Qt::white;
}

void Thread::run()
{
    int i,j,k;
    Mat src, dst, color_dst, color_src;
//    int key=0;
    int count = 1;

#ifdef KINECT

// Open kinect
        XnStatus rc;
Context g_context;
ScriptNode g_scriptNode;
DepthGenerator g_depth;
ImageGenerator g_image;
DepthMetaData g_depthMD;
ImageMetaData g_imageMD;


        EnumerationErrors errors;
        rc = g_context.InitFromXmlFile(SAMPLE_XML_PATH, g_scriptNode, &errors);
        if (rc == XN_STATUS_NO_NODE_PRESENT)
        {
                XnChar strError[1024];
                errors.ToString(strError, 1024);
                printf("%s\n", strError);
                return;
        }
        else if (rc != XN_STATUS_OK)
        {
                printf("Open failed: %s\n", xnGetStatusString(rc));
                return;
        }

        rc = g_context.FindExistingNode(XN_NODE_TYPE_DEPTH, g_depth);
        if (rc != XN_STATUS_OK)
        {
                printf("No depth node exists! Check your XML.");
                return;
        }

        rc = g_context.FindExistingNode(XN_NODE_TYPE_IMAGE, g_image);
        if (rc != XN_STATUS_OK)

        {
                printf("No image node exists! Check your XML.");
                return;
        }

        g_depth.GetMetaData(g_depthMD);
        g_image.GetMetaData(g_imageMD);

        // Hybrid mode isn't supported in this sample
        if (g_imageMD.FullXRes() != g_depthMD.FullXRes() || g_imageMD.FullYRes() != g_depthMD.FullYRes())
        {
                printf ("The device depth and image resolution must be equal!\n");
                return;
        }

        // RGB is the only image format supported.
        if (g_imageMD.PixelFormat() != XN_PIXEL_FORMAT_RGB24)
        {
                printf("The device image format must be RGB24\n");
                return;
        }

#endif

        while(1) {
#ifdef KINECT
	        XnStatus rc = XN_STATUS_OK;
        // Read a new frame
        rc = g_context.WaitAnyUpdateAll();
        if (rc != XN_STATUS_OK)
        {
                printf("Read failed: %s\n", xnGetStatusString(rc));
                return;
        }

        g_depth.GetMetaData(g_depthMD);
        g_image.GetMetaData(g_imageMD);

        const XnDepthPixel* pDepth = g_depthMD.Data();
        const XnUInt8* pImage = g_imageMD.Data();

	Mat depth16(480,640,CV_16UC1,(unsigned short*)g_depthMD.WritableData());
        Mat imni1(480,640,CV_8UC3,(uchar*)g_imageMD.WritableData());
        Mat imni;
        flip(imni1, imni, 1);

	Mat depthshow;

	depth16.convertTo(depthshow,CV_8U,-255/4096.0,255);

//    if(!(src=imread(s, 0)).data)
//        return -1;

//    cvtColor( src, color_src, CV_GRAY2BGR );
//        cvtColor( imni, color_src, CV_RGB2HSV);//CV_RGB2BGR );
        cvtColor( imni, color_src, CV_RGB2BGR );
        cvtColor( imni, src, CV_RGB2GRAY );
#else
        if(!(color_src=imread(QString("files/%1.png").arg(count++).toAscii().data())).data) {
            qWarning(QString("files/%1.png").arg(--count).toAscii().data());
            return;
        }

//            cvtColor( src, color_src, CV_RGB2BGR );
//            cvtColor( color_src, src, CV_GRAY2BGR );
#endif
        Mat hsv_frame, thresholded, thresholded2;

//  for(i=0;i<480;i++) for(j=0;j<640;j++) for(k=0;k<src.channels();k++)
//    src.data[i*src.step+j*src.channels()+k]=src.data[i*src.step+j*src.channels()+k] > 150 ? 255:0;


    switch(pre_pre_detector) {
    case 0:
        cvtColor( color_src, src, CV_BGR2GRAY );
        break;
    case 1:
        cvtColor(color_src, hsv_frame, CV_BGR2HSV);
        GaussianBlur( hsv_frame, hsv_frame, Size(9, 9), 2, 2 );
        inRange(hsv_frame,Scalar(inrange_upper.blue() - inrange_lower.blue(), inrange_upper.green() - inrange_lower.green(), inrange_upper.red() - inrange_lower.red()),Scalar(inrange_upper.blue() + inrange_lower.blue(), inrange_upper.green() + inrange_lower.green(), inrange_upper.red() + inrange_lower.red()),src);
        cvtColor( src, color_src, CV_GRAY2BGR );
        break;
    }

    switch(pre_detector) {
    case 0:
        break;
    case 1:
        Canny( src, dst, canny_t1, canny_t2, 3 );
        break;
    case 2:
        adaptiveThreshold(src, dst, at_maxValue, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY_INV, at_blockSize, at_C);
        break;
    case 3:
        GaussianBlur( src, dst, Size(9, 9), 2, 2 );
        break;
    case 4:
        GaussianBlur( src, dst, Size(9, 9), 2, 2 );
        Canny( dst, dst, canny_t1, canny_t2, 3 );
        break;
    }
    cvtColor( dst, color_dst, CV_GRAY2BGR );




    switch(detector) {
    case 0: {
        vector<Vec2f> lines;
        HoughLines( dst, lines, 1, CV_PI/180, hl_threshold );

        for( size_t i = 0; i < lines.size(); i++ )
        {
            float rho = lines[i][0];
            float theta = lines[i][1];
            double a = cos(theta), b = sin(theta);
            double x0 = a*rho, y0 = b*rho;
            Point pt1(cvRound(x0 + 1000*(-b)),
                      cvRound(y0 + 1000*(a)));
            Point pt2(cvRound(x0 - 1000*(-b)),
                      cvRound(y0 - 1000*(a)));

            if(!((pt1.x < 10 && pt1.y < 10) || (pt2.x < 10 && pt2.y < 10) || (pt1.x > 630 && pt1.y > 470) || (pt2.x > 630 && pt2.y > 470)))

            line( color_src, pt1, pt2, CV_RGB(255,0,0), 3, 8 );
        } }
        break;
    case 1: {
        vector<Vec4i> lines;
        HoughLinesP( dst, lines, 1, CV_PI/180, hlp_threshold, hlp_minLineLength, hlp_maxLineGap );
        lineas_detectadas = lines.size();
        ym=0;
        teta=0;
        for( size_t i = 0; i < lines.size(); i++ )
        {
            line( color_src, Point(lines[i][0], lines[i][1]),
                Point(lines[i][2], lines[i][3]), Scalar(0,0,255), 3, 8 );
            double m = ((double)lines[i][1] - (double)lines[i][3]) / ((double)lines[i][0] - (double)lines[i][2]);
            double y0 = m*(0-lines[i][0]) + lines[i][1];
            ym += 240*m+y0;
            teta += atan2(-((double)lines[i][1] - (double)lines[i][3]), -((double)lines[i][0] - (double)lines[i][2])) * 180/M_PI;
        }
        ym/=lines.size();
        teta/=lines.size();
        }
        break;
    case 2: {
//        GaussianBlur( dst, dst, Size(9, 9), 2, 2 );
        vector<Vec3f> circles;
        HoughCircles(dst, circles, CV_HOUGH_GRADIENT,
                     2, dst.rows/4, hc_canny_threshold, hc_threshold_center, hc_radiomin, hc_radiomax);
        lineas_detectadas = circles.size();
        ym=0;
        teta=0;
        for( size_t i = 0; i < circles.size(); i++ )
        {
             Point center(cvRound(circles[i][0]), cvRound(circles[i][1]));
             int radius = cvRound(circles[i][2]);
             // draw the circle center
             circle( color_src, center, 3, Scalar(0,255,0), -1, 8, 0 );
             // draw the circle outline
             circle( color_src, center, radius, Scalar(0,0,255), 3, 8, 0 );

             ym=circles[i][1];
        }
        }
    case 3: {
//        Mat hsv_frame, thresholded, thresholded2;
        cvtColor(color_src, hsv_frame, CV_BGR2HSV);

        Scalar hsv_min = Scalar(0, 50, 170, 0);
        Scalar hsv_max = Scalar(10, 180, 256, 0);
        Scalar hsv_min2 = Scalar(190, 50, 170, 0);
        Scalar hsv_max2 = Scalar(256, 180, 256, 0);

        // to handle color wrap-around, two halves are detected and combined
        inRange(hsv_frame, hsv_min, hsv_max, thresholded);
        inRange(hsv_frame, hsv_min2, hsv_max2, thresholded2);
        bitwise_or(thresholded, thresholded2, thresholded);

        // hough detector works better with some smoothing of the image
//        boxFilter( thresholded, dst, CV_GAUSSIAN, 9, 9 );
        GaussianBlur( thresholded, dst, cv::Size(9, 9), 0, 0, cv::BORDER_REPLICATE );
        cvtColor( dst, color_dst, CV_GRAY2BGR );

        vector<Vec3f> circles;
        HoughCircles(dst, circles, CV_HOUGH_GRADIENT, 2, dst.rows/4, 100, 40, 20, 200 );
        for( size_t i = 0; i < circles.size(); i++ )
        {
             Point center(cvRound(circles[i][0]), cvRound(circles[i][1]));
             int radius = cvRound(circles[i][2]);
             // draw the circle center
             circle( color_src, center, 3, Scalar(0,255,0), -1, 8, 0 );
             // draw the circle outline
             circle( color_src, center, radius, Scalar(0,0,255), 3, 8, 0 );
        }
        }
        break;
    }
//    namedWindow( "Source", 1 );
//    imshow( "Source", color_src );
//    namedWindow( "dst", 1 );
//    imshow( "dst", dst );

//    namedWindow( "Detected Lines", 1 );
//    imshow( "Detected Lines", color_dst );

    QImage qtFrame(color_src.data, color_src.size().width, color_src.size().height, color_src.step, QImage::Format_RGB888);
    qtFrame = qtFrame.rgbSwapped();

    QImage qtFrame2(color_dst.data, color_dst.size().width, color_dst.size().height, color_dst.step, QImage::Format_RGB888);
//    QImage qtFrame2(thresholded2.data, thresholded2.size().width, thresholded2.size().height, thresholded2.step, QImage::Format_RGB888);
    qtFrame2 = qtFrame2.rgbSwapped();


    mutex.lock();
    image = qtFrame;
    image2 = qtFrame2;
    mutex.unlock();
    emit imageReady();

//    key=waitKey(33);
    msleep(30);
        }
#ifdef KINECT
        g_depth.Release();
        g_scriptNode.Release();
        g_context.Release();
#endif
    return;
}
