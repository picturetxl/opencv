#include <iostream>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;
int main()
{
	Mat img = imread("C:\\Users\\tailiang\\Pictures\\images.jpg");
	if (img.empty())
	{
		return -1;
	}
	namedWindow("example", WINDOW_AUTOSIZE);
	imshow("example", img);
	waitKey(0);
	destroyWindow("example");
	return 0;
}
