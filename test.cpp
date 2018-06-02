/*
CV_[The number of bits per item][Signed or Unsigned][Type Prefix]C[The channel number]

CV_8UC3：8 表示每个通道几位
	 U 表示无符号还是有符号
	 C 类型前缀，这里是Char
	 3 几通道

cv::Scalar 是一个四元素的短向量
*/
#include <iostream>
#include <opencv2/core/core.hpp>
using namespace std;
using namespace cv;
int main() {
    Mat M(2, 2, CV_8UC3, Scalar(0, 0, 255));
    cout << "M = " << endl << " " << M << endl << endl;
    return 0;
}
