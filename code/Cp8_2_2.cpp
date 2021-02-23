/*
	8.2.2 ������������������
	1.ֵ���ݻ���ֵ�Ŀ�����������ʱ���������޸�ԭʼ����
	�������Ǳ����ı��������������൱�ڲ���ԭʼ����
*/


#include<iostream>
using namespace std;

void swapr(int& a,int& b);
void swapp(int* p,int* q);
void swapv(int a,int b);

int main()
{
	int wallet1 = 300;
	int wallet2 = 350;

	cout << "wallet1: " << wallet1 << endl;
	cout << "wallet2: " << wallet2 << endl;

	//�����ɹ�
	cout << "swapr():" << endl;
	swapr(wallet1,wallet2);
	cout << "wallet1: " << wallet1 << endl;
	cout << "wallet2: " << wallet2 << endl;

	//�ֻ�������
	cout << "swapp():" << endl;
	swapp(&wallet1, &wallet2);
	cout << "wallet1: " << wallet1 << endl;
	cout << "wallet2: " << wallet2 << endl;

	//�����ɹ�
	cout << "swapv():" << endl;
	swapv(wallet1, wallet2);
	cout << "wallet1: " << wallet1 << endl;
	cout << "wallet2: " << wallet2 << endl;

	return 0;
}

void swapr(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void swapp(int* p, int* q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
void swapv(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
/*
���
================================
wallet1: 300
wallet2: 350
swapr():
wallet1: 350
wallet2: 300
swapp():
wallet1: 300
wallet2: 350
swapv():
wallet1: 300
wallet2: 350
*/