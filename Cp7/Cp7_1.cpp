/*
	7.1 ����
	1.C++�������ܷ������飬���ܷ��ذ�������Ľṹ
	2.����ԭ��
	Ϊʲô��Ҫ����ԭ�ͣ�
	1.���߱����������������ͺͷ���ֵ���ͣ�Լ������Ҫ����ã�ͬʱȷ���������ñ�����֪��Ӧ��ȡ���ٸ��ֽ�
	2.Ԥ�ȶ��庯������ֹ�������������Һ���������Ч��

*/

#include<iostream>
using namespace std;

//����ԭ��
//���Բ�����������
void cheers(int);
double cube(double x);

int main()
{
	cheers(2);
	cout << "cube: " << cube(3) << endl;
	return 0;
}

void cheers(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Cheers" << endl;
	}
}

double cube(double x)
{
	return x * x * x;
}

/*
���
=================================
Cheers
Cheers
Cheers
Cheers
Cheers
cube: 27
*/