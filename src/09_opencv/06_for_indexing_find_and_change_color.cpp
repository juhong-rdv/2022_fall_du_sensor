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

			if( red_value == 240 && green_value == 221 && blue_value == 144 )
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
