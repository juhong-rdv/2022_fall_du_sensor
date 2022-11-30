#include "opencv2/opencv.hpp"	
#include <stdio.h>

int main(void)
{
	printf("Hello World\n") ;
	cv::Mat image = cv::imread("/home/dsu/test/test.jpg") ;
    
    	cv::CascadeClassifier cascade; 
	cascade.load( "/home/dsu/opencv/opencv/data/haarcascades/haarcascade_frontalface_default.xml" ) ; 
	
    	std::vector<cv::Rect> faces;
    	cascade.detectMultiScale( image, faces );
        
        for( int i=0 ; i<faces.size() ; i++ )
        {
        	cv::Mat roi_face_image = image(faces[i]) ;
        	cv::blur(roi_face_image, roi_face_image, cv::Size(10,10)) ;
        }
	
	cv::imshow("test", image) ;
	cv::waitKey(0) ;
	
	return 0 ;
}