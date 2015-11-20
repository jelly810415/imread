#include <highgui.h>
//#include<iostream>
using namespace cv;
//using namespace std;
int main()
{
	Mat src;
	src = imread("lena.jpg");

	//cout << src.rows << "    " << src.cols;
	imshow("result", src);
	waitKey(0);
	return 0;
}