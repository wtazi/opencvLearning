#include<opencv2/opencv.hpp>//opencvͷ�ļ�
#include<iostream>

using namespace cv;//���������ռ�
using namespace std;

int main() {
	Mat src = imread("D:/images/1-1.jpg");//��ȡͼ��	
	imshow("input", src);//(�������ƣ�����Ҫ��ʾ��ͼ�����)
	waitKey(0);//��ʾ��Ҫ��0����������1��ʾͣ��1ms
	destroyAllWindows();//��ǰ�����д�������ʾ���ڽ�������
	return 0;
}
