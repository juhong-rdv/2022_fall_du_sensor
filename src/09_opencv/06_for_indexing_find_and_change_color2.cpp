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

	cv::imshow("ori", image) ;
	
	for( int y=0 ; y<image_height ; y++ )
	{
		for( int x=0 ; x<image_width ; x++ )
		{
			//indexing
			int red_index = (image_width * y + x)*3 + 2 ;
			int green_index = (image_width * y + x)*3 + 1 ;
			int blue_index = (image_width * y + x)*3 + 0 ;

			int red_value = image.data[red_index] ;
			int green_value = image.data[green_index] ;
			int blue_value = image.data[blue_index] ;

			if( red_value > 200 && red_value < 260 && 
				green_value > 200 && green_value < 240 && 
				blue_value > 100 && blue_value < 170 )
			{				
				image.data[red_index] = 0 ;	//red
				image.data[green_index] = 255 ;	//green
				image.data[blue_index] = 0 ;	//blue
			}
		}
	}
	
	cv::imshow("test", image) ;
	cv::waitKey(0) ;
	
	return 0 ;
}
