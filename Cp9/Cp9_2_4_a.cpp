#include<iostream>
using namespace std;

//extern ��ʾʹ���Ѷ���ı������������·����ڴ�
extern double warming;

void update(double dt)
{
	warming += dt;
	cout <<"Update global warming"<<endl;
}

void local()
{
	//û��ʹ��extern���¶���һ������
	double warming = 0.8;
	cout << "local warming:"<< warming << endl;
}