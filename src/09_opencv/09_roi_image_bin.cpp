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
	
	cv::Mat roi_image ; // = image(roi) ;
	image(roi).copyTo(roi_image) ;
	int image_width = roi_image.cols ;
	int image_height = roi_image.rows ;
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

			int red_value = roi_image.data[red_index] ;
			int green_value = roi_image.data[green_index] ;
			int blue_value = roi_image.data[blue_index] ;

			if( red_value > 220 )
			{				
				roi_image.data[red_index] = 255 ;	//red
				roi_image.data[green_index] = 255 ;	//green
				roi_image.data[blue_index] = 255 ;	//blue
			}
			else 
			{				
				roi_image.data[red_index] = 0 ;	//red
				roi_image.data[green_index] = 0 ;	//green
				roi_image.data[blue_index] = 0 ;	//blue
			}
		}
	}
	 
	cv::imshow("test", image) ;
	cv::imshow("roi", roi_image) ;
	cv::waitKey(0) ;
	
	return 0 ;
}