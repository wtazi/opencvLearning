#include<quickopencv.h>

void QuickDemo::colorSpace_Demo(Mat &image) {
	Mat gray, hsv;
	cvtColor(image, hsv, COLOR_BGR2HSV);
	cvtColor(image, gray, COLOR_BGR2GRAY);
	imshow("HSV", hsv);
	imshow("灰度", gray);
	imwrite("D:/images/hsv.png", hsv);
	imwrite("D:/images/gray.png", gray);
}

void QuickDemo::mat_creation_demo(Mat &image) {
	//Mat m1, m2;
	//m1 = image.clone();
	//image.copyTo(m2);

	//创建空白图像
	Mat m3 = Mat::zeros(Size(400, 400), CV_8UC3);//8*8的，8位的，无符号的char，1表示单通道的
											 //ones(Size(8, 8), CV_8UC1)
	m3 = Scalar(0,0,255);
	//获取宽、高、通道数
	std::cout << "width" << m3.cols << "height:" << m3.rows << "channels:" << m3.channels() << std::endl;
	//std::cout << m3 << std::endl;
	imshow("图像", m3);

	//Mat m4 = m3;
	//m4 = Scalar(0, 255, 255);
	//imshow("图像", m3);//这里改变m4就是改变m3
	Mat m4 = m3.clone();
	m4 = Scalar(0, 255, 255);
	imshow("图像", m3);
	imshow("图像4", m4);//克隆或拷贝都会产生一个新的图像

}