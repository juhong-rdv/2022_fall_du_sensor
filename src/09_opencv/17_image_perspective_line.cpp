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
	
	cv::Mat gray ;
    	cv::cvtColor(dst, gray, cv::COLOR_BGR2GRAY);
    	
    	// Edge detection
    	cv::Mat edge ;
    	cv::Canny(gray, edge, 50, 200, 3);
	
	// Standard Hough Line Transform
	std::vector<cv::Vec2f> lines; 
	cv::HoughLines(edge, lines, 1, CV_PI/180, 120) ;
	
	// Draw the lines
	for( int i = 0; i < lines.size(); i++ )
	{
		double rho = lines[i][0], theta = lines[i][1];
		cv::Point pt1, pt2;
		double a = cos(theta);
		double b = sin(theta);
		double x0 = a*rho, y0 = b*rho;
		pt1.x = cvRound(x0 + 1000*(-b));
		pt1.y = cvRound(y0 + 1000*(a));
		pt2.x = cvRound(x0 - 1000*(-b));
		pt2.y = cvRound(y0 - 1000*(a));
		
		cv::line( dst, pt1, pt2, cv::Scalar(0,0,255), 1);
	}
	
	
	cv::imshow("image", image) ;
	cv::imshow("dst", dst) ;
	cv::waitKey(0) ;
	
	return 0 ;
}