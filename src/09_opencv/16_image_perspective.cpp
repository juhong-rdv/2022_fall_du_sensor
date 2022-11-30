#include "opencv2/opencv.hpp"	
#include <stdio.h>
#include <math.h>

int main(void)
{
	cv::Mat image = cv::imread("/home/dsu/test/line.png");
    
	cv::Point2f src_points[4] ;
	src_points[0] = cv::Point2f(407, 252) ;
	src_points[1] = cv::Point2f(542, 252) ;
	src_points[2] = cv::Point2f(653, 372) ;
	src_points[3] = cv::Point2f(248, 372) ;

	cv::Point2f dst_points[4] ;
	dst_points[0] = cv::Point2f(400, 250) ;
	dst_points[1] = cv::Point2f(600, 250) ;
	dst_points[2] = cv::Point2f(600, 600) ;
	dst_points[3] = cv::Point2f(400, 600) ;

	cv::Mat perspective = cv::getPerspectiveTransform(src_points, dst_points) ;
	
	cv::Mat dst ;
	cv::warpPerspective(image, dst, perspective, image.size()) ;
	
	cv::imshow("image", image) ;
	cv::imshow("dst", dst) ;
	cv::waitKey(0) ;
	
	return 0 ;
}