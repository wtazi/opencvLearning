#include<opencv2/opencv.hpp>//opencv头文件
#include<iostream>

using namespace cv;//引用命名空间
using namespace std;

int main() {
	Mat src = imread("D:/images/1-1.jpg");//读取图像	
	imshow("input", src);//(窗口名称，窗口要显示的图像对象)
	waitKey(0);//显示需要，0代表阻塞，1表示停顿1ms
	destroyAllWindows();//对前面所有创建的显示窗口进行销毁
	return 0;
}
