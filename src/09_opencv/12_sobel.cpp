#include "opencv2/opencv.hpp"	
#include <stdio.h>

int main(void)
{
	printf("Hello World\n") ;
	cv::Mat image = cv::imread("/home/dsu/test/test.jpg") ;

	cv::Mat gray_image ;
	cv::cvtColor(image, gray_image, cv::COLOR_BGR2GRAY) ;
	
	cv::Mat sobel_x_image ;
	cv::Sobel(gray_image, sobel_x_image, CV_8UC1, 1, 0) ;
	
	cv::Mat sobel_y_image ;
	cv::Sobel(gray_image, sobel_y_image, CV_8UC1, 0, 1) ;
	
	cv::imshow("test", image) ;
	cv::imshow("sobel_x_image", sobel_x_image) ;
	cv::imshow("sobel_y_image", sobel_y_image) ;
	
	cv::waitKey(0) ;
	
	return 0 ;
}