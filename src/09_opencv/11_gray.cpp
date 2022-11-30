#include "opencv2/opencv.hpp"	
#include <stdio.h>

int main(void)
{
	printf("Hello World\n") ;
	cv::Mat image = cv::imread("/home/dsu/test/test.jpg") ;

	cv::Mat gray_image ;
	cv::cvtColor(image, gray_image, cv::COLOR_BGR2GRAY) ;
	
	cv::imshow("test", image) ;
	cv::imshow("gray", gray_image) ;
	
	cv::waitKey(0) ;
	
	return 0 ;
}