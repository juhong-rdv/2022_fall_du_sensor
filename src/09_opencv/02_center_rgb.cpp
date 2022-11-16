#include "opencv2/opencv.hpp"	
#include <stdio.h>

int main(void)
{
	printf("Hello World\n") ;
	cv::Mat image = cv::imread("/home/dsu/work/01_opencv_imshow_example/test.jpg") ;

	int image_width = image.cols ;
	int image_height = image.rows ;
	int image_center_x = image_width/2 ;
	int image_center_y = image_height/2 ;
	
	int red_index = (image_width * image_center_y + image_center_x)*3 + 2 ;
	int green_index = (image_width * image_center_y + image_center_x)*3 + 1 ;
	int blue_index = (image_width * image_center_y + image_center_x)*3 + 0 ;
	
	int red_value = image.data[red_index] ;
	int green_value = image.data[green_index] ;
	int blue_value = image.data[blue_index] ;
	
	printf("red = %d\n", red_value) ;
	printf("green = %d\n", green_value) ;
	printf("blue = %d\n", blue_value) ;
	
	cv::imshow("test", image) ;
	cv::waitKey(0) ;
	
	return 0 ;
}