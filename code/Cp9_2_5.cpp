/*
	9.2.5 ��̬�����ԡ��ڲ�������
*/

#include<iostream>
using namespace std;

//static ��˽�еģ�ֻ������ļ���ʹ�ã�û��static�����뱨��Cp9_2_5_a.cpp
static int harry = 200;

void func1();
int main()
{
	cout<<"static harry: "<<harry<<endl;
	func1();
	return 0;
}

/*
���
=========================
static harry: 200
harry: 300
*/