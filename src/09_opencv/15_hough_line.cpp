#include "opencv2/opencv.hpp"	
#include <stdio.h>
#include <math.h>

int main(void)
{
	cv::Mat image = cv::imread("/home/dsu/test/building.jpg");
    
    	cv::Mat gray ;
    	cv::cvtColor(image, gray, cv::COLOR_BGR2GRAY);
    	
    	// Edge detection
    	cv::Mat edge ;
    	cv::Canny(image, edge, 50, 200, 3);

    	// Standard Hough Line Transform
	std::vector<cv::Vec2f> lines; 
	cv::HoughLines(edge, lines, 1, CV_PI/180, 180) ;

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
		
		cv::line( image, pt1, pt2, cv::Scalar(0,0,255), 1);
	}
	
	cv::imshow("edge", edge) ;
	cv::imshow("line", image) ;
	cv::waitKey(0) ;
	
	return 0 ;
}