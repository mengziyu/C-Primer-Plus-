/*
	4.8 ָ������
	1.ָ��������
	2.�����ַ
	3.����Ķ�̬����
*/
#include<iostream>
using namespace std;



int main_()
{
	double wages[3] = {1000.0,2000.0,3000.0};
	short stacks[3] = { 3,2,1 };

	double* pw = wages;
	short* ps = &stacks[0];
	cout << "pw: " << pw << ", *pw: " << *pw << endl;
	pw += 1;
	cout << "pw+=1:" << endl;
	cout << "pw: " << pw << ", *pw: " << *pw << endl << endl;

	cout << "ps: " << ps << ", *ps: " << *ps << endl;
	ps += 1;
	cout << "ps+=1:" << endl;
	cout << "ps: " << ps << ", *ps: " << *ps << endl << endl;

	//�������ƿɵ�ָ���ã���ַ+1����ȡֵ
	cout << "*(stacks + 1): " << *(stacks + 1) << endl << endl;

	//sizeof ����������ֽ���
	cout << "sizeof wages: " << sizeof(wages) <<endl;
	cout << "sizeof stacks: " << sizeof(stacks) <<endl;

	return 0;
}
/*
���
=====================================
pw: 00C2FDB8, *pw: 1000
pw+=1:
pw: 00C2FDC0, *pw: 2000

ps: 00C2FDA8, *ps: 3
ps+=1:
ps: 00C2FDAA, *ps: 2

*(stacks + 1): 2

sizeof wages: 24
sizeof stacks: 6
*/

int main__()
{
	double p[3];
	p[0] = 0.2;
	p[1] = 0.5;
	p[2] = 0.8;

	double* p1 = p;
	//������ȡ��ַ��ֵ
	//()���Ų���ʡ�ԣ���Ȼ���ǰ���3��Ԫ�ص�ָ��������
	double(*p2)[3] = &p;

	//p1ָ����ǵ�һ��Ԫ�صĵ�ַ
	//p2ָ�������������ĵ�ַ
	cout << "p1 address: " << p1 << endl;
	cout << "p2 address: " << p2 << endl;

	//��Ȼ�ʼ������ַ��ͬ����+1����p1������һ��Ԫ��ָ��ڶ���Ԫ�ص�ַ����p2������������
	cout << "p1 address +1: " << p1+1 << endl;
	cout << "p2 address +1: " << p2+1 << endl;
	return 0;
}
/*
���
=====================================
p1 address: 0136FD7C
p2 address: 0136FD7C
p1 address +1: 0136FD84
p2 address +1: 0136FD94
*/


int mian()
{
	int size=10;
	//int p[size]; //���벻ͨ������������ʱ�����þ�̬���࣬�����ڱ���ʱ����
	int* m = new int[size]; //new ����ʱ�����ö�̬���࣬����ʱ����
	delete[] m;
	return 0;
}











