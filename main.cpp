/* This is a standalone program. Pass an image name as the first parameter
of the program.  Switch between standard and probabilistic Hough transform
by changing "#if 1" to "#if 0" and back */
#include <cv.h>
#include <highgui.h>
#include <math.h>
#include <stdio.h>

using namespace cv;

int main(int argc, char** argv)
{
int ii,i,j,k;
for (ii=1; ii<68; ii++){
    Mat src, dst, color_dst, color_src;
    char s[20];
    sprintf(s, "files/%d.png", ii);
    printf("%s\r\n", s);
    if(!(src=imread(s, 0)).data)
        return -1;

    cvtColor( src, color_src, CV_GRAY2BGR );

  for(i=0;i<480;i++) for(j=0;j<640;j++) for(k=0;k<src.channels();k++)
    src.data[i*src.step+j*src.channels()+k]=src.data[i*src.step+j*src.channels()+k] > 150 ? 255:0;


    Canny( src, dst, 50, 200, 3 );

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

//    namedWindow( "Detected Lines", 1 );
//    imshow( "Detected Lines", color_dst );

    waitKey(0);
}
    return 0;
}
