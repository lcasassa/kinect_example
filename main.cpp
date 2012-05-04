#include <stdio.h>
#include <math.h>

#include <cv.h>
#include <highgui.h>
using namespace cv;

#include <XnOS.h>
#include <XnCppWrapper.h>
using namespace xn;

#define SAMPLE_XML_PATH "SamplesConfig.xml"

int main(int argc, char** argv)
{
    int i,j,k;
    Mat src, dst, color_dst, color_src;

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
                return (rc);
        }
        else if (rc != XN_STATUS_OK)
        {
                printf("Open failed: %s\n", xnGetStatusString(rc));
                return (rc);
        }

        rc = g_context.FindExistingNode(XN_NODE_TYPE_DEPTH, g_depth);
        if (rc != XN_STATUS_OK)
        {
                printf("No depth node exists! Check your XML.");
                return 1;
        }

        rc = g_context.FindExistingNode(XN_NODE_TYPE_IMAGE, g_image);
        if (rc != XN_STATUS_OK)

        {
                printf("No image node exists! Check your XML.");
                return 1;
        }

        g_depth.GetMetaData(g_depthMD);
        g_image.GetMetaData(g_imageMD);

        // Hybrid mode isn't supported in this sample
        if (g_imageMD.FullXRes() != g_depthMD.FullXRes() || g_imageMD.FullYRes() != g_depthMD.FullYRes())
        {
                printf ("The device depth and image resolution must be equal!\n");
                return 1;
        }

        // RGB is the only image format supported.
        if (g_imageMD.PixelFormat() != XN_PIXEL_FORMAT_RGB24)
        {
                printf("The device image format must be RGB24\n");
                return 1;
        }


	VideoWriter outputVideo;
	outputVideo.open("/tmp/out.avi", CV_FOURCC('D','I','V','X'), 30, Size(640, 480), true); // 'P','I','M','1'
	if (!outputVideo.isOpened()) {
	        printf("Could not open the output video for write\n");
	        return -1;
	}

	int key;
while(key != 'q') {

	        XnStatus rc = XN_STATUS_OK;
        // Read a new frame
        rc = g_context.WaitAnyUpdateAll();
        if (rc != XN_STATUS_OK)
        {
                printf("Read failed: %s\n", xnGetStatusString(rc));
                return 1;
        }

        g_depth.GetMetaData(g_depthMD);
        g_image.GetMetaData(g_imageMD);

        const XnDepthPixel* pDepth = g_depthMD.Data();
        const XnUInt8* pImage = g_imageMD.Data();

	Mat depth16(480,640,CV_16UC1,(unsigned short*)g_depthMD.WritableData());
	Mat imni(480,640,CV_8UC3,(uchar*)g_imageMD.WritableData());

//	cv::hconcat(imni, depth16, imni);
	outputVideo << imni;
/*
//    if(!(src=imread(s, 0)).data)
//        return -1;

//    cvtColor( src, color_src, CV_GRAY2BGR );
	cvtColor( imni, color_src, CV_RGB2BGR );		
	cvtColor( imni, src, CV_RGB2GRAY );		


//  for(i=0;i<480;i++) for(j=0;j<640;j++) for(k=0;k<src.channels();k++)
//    src.data[i*src.step+j*src.channels()+k]=src.data[i*src.step+j*src.channels()+k] > 150 ? 255:0;


    Canny( src, dst, 250, 300, 3 );

    cvtColor( dst, color_dst, CV_GRAY2BGR );


#if 1
    vector<Vec2f> lines;
    HoughLines( dst, lines, 1, CV_PI/180, 100 );

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
    }
#else
    vector<Vec4i> lines;
    HoughLinesP( dst, lines, 1, CV_PI/180, 80, 30, 10 );
    for( size_t i = 0; i < lines.size(); i++ )
    {
        line( color_dst, Point(lines[i][0], lines[i][1]),
            Point(lines[i][2], lines[i][3]), Scalar(0,0,255), 3, 8 );
    }
#endif
    namedWindow( "Source", 1 );
    imshow( "Source", color_src );
*/
//    namedWindow( "Detected Lines", 1 );
//    imshow( "Detected Lines", color_dst );

    namedWindow( "Source", 1 );
//    imshow( "Source", depth16 );
    imshow( "Source", imni );
    key = waitKey(1);
    }

    return 0;
}
