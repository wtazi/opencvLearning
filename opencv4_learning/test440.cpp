#include<opencv2/opencv.hpp>//opencvͷ�ļ�
#include<quickopencv.h>
#include<iostream>

using namespace cv;//���������ռ�
using namespace std;

int main() {
	Mat src = imread("D:/images/1-1.jpg");//��ȡͼ��   ,IMREAD_GRAYSCALE	
	if (src.empty()) {
		printf("could not load image....\n");
		return -1;
	}
	//namedWindow("���봰��", WINDOW_FREERATIO);//����һ������.FREERATIO���Ե���ͼ���С,����ʾͼ��ĸ���ѡ��
	imshow("���봰��", src);//(�������ƣ�����Ҫ��ʾ��ͼ�����)
							//imshow�����ð�λ��

	QuickDemo qd;
	qd.colorSpace_Demo(src);

	waitKey(0);//��ʾ��Ҫ��0����������1��ʾͣ��1ms
	destroyAllWindows();//��ǰ�����д�������ʾ���ڽ�������
	return 0;
}
