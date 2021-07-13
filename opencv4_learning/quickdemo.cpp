#include<quickopencv.h>

void QuickDemo::colorSpace_Demo(Mat &image) {
	Mat gray, hsv;
	cvtColor(image, hsv, COLOR_BGR2HSV);
	cvtColor(image, gray, COLOR_BGR2GRAY);
	imshow("HSV", hsv);
	imshow("�Ҷ�", gray);
	imwrite("D:/images/hsv.png", hsv);
	imwrite("D:/images/gray.png", gray);
}

void QuickDemo::mat_creation_demo(Mat &image) {
	//Mat m1, m2;
	//m1 = image.clone();
	//image.copyTo(m2);

	//�����հ�ͼ��
	Mat m3 = Mat::zeros(Size(400, 400), CV_8UC3);//8*8�ģ�8λ�ģ��޷��ŵ�char��1��ʾ��ͨ����
											 //ones(Size(8, 8), CV_8UC1)
	m3 = Scalar(0,0,255);
	//��ȡ���ߡ�ͨ����
	std::cout << "width" << m3.cols << "height:" << m3.rows << "channels:" << m3.channels() << std::endl;
	//std::cout << m3 << std::endl;
	imshow("ͼ��", m3);

	//Mat m4 = m3;
	//m4 = Scalar(0, 255, 255);
	//imshow("ͼ��", m3);//����ı�m4���Ǹı�m3
	Mat m4 = m3.clone();
	m4 = Scalar(0, 255, 255);
	imshow("ͼ��", m3);
	imshow("ͼ��4", m4);//��¡�򿽱��������һ���µ�ͼ��

}