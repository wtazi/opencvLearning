#include<opencv2/opencv.hpp>//opencv头文件
#include<quickopencv.h>
#include<iostream>

using namespace cv;//引用命名空间
using namespace std;

int main() {
	Mat src = imread("D:/images/1-1.jpg");//读取图像   ,IMREAD_GRAYSCALE	
	if (src.empty()) {
		printf("could not load image....\n");
		return -1;
	}
	//namedWindow("输入窗口", WINDOW_FREERATIO);//创建一个窗口.FREERATIO可以调整图像大小,是显示图像的更好选择
	imshow("输入窗口", src);//(窗口名称，窗口要显示的图像对象)
							//imshow必须用八位的

	QuickDemo qd;
	qd.colorSpace_Demo(src);

	waitKey(0);//显示需要，0代表阻塞，1表示停顿1ms
	destroyAllWindows();//对前面所有创建的显示窗口进行销毁
	return 0;
}
