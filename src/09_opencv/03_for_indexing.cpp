#include "opencv2/opencv.hpp"	
#include <stdio.h>

int main(void)
{
	printf("Hello World\n") ;
	cv::Mat image = cv::imread("/home/dsu/work/01_opencv_imshow_example/test.jpg") ;

	for( int y=0 ; y<image.rows ; y++ )
	{
		for( int x=0 ; x<image.cols ; x++ )
		{
			//indexing
		}
	}
	
	cv::imshow("test", image) ;
	cv::waitKey(0) ;
	
	return 0 ;
}
