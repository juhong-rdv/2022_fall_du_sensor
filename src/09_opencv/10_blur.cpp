#include "opencv2/opencv.hpp"	
#include <stdio.h>

int main(void)
{
	printf("Hello World\n") ;
	cv::Mat image = cv::imread("/home/dsu/test/test.jpg") ;

	cv::Mat blur_image ;
	cv::blur(image, blur_image, cv::Size(5,5)) ;
	
	cv::imshow("test", image) ;
	cv::imshow("blur", blur_image) ;
	
	cv::waitKey(0) ;
	
	return 0 ;
}