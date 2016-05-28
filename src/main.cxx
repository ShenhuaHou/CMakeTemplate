#include <iostream>
#include "TemplateLib.hpp"
#include <opencv2/opencv.hpp>

int main(int argc,char *argv[])
{
	std::cout<<"CMake Test!"<<std::endl;
	TemplateLib tb;
	tb.MyTemplateLib("hi");
	/*opencv test*/
	cv::Mat img = cv::imread("D:\\lena.jpg");
	cv::imshow("opencv test",img);
	cv::waitKey(0);
	return 0;
}