#include "opencv2/opencv.hpp"	
#include <stdio.h>

int main(void)
{
	printf("Hello World\n") ;
	cv::Mat image = cv::imread("/home/dsu/test/test2.jpg") ;

	cv::Rect roi ;
	roi.x = 177 ;
	roi.y = 230 ;
	roi.width = 125 ;
	roi.height = 100 ;
	
	cv::Mat roi_image ;
	image(roi).copyTo(roi_image) ;
	
	cv::imshow("test", image) ;
	cv::imshow("roi", roi_image) ;
	cv::waitKey(0) ;
	
	return 0 ;
}