/*
	8.2 ���ñ���
*/

#include<iostream>
using namespace std;

int main_()
{
	int rats = 101;
	//int ���ã��京����rats�����ı���������rodentsҲ�൱�ڲ���rats
	int& rodents = rats;

	cout << "rats: " << rats<<endl;
	cout << "rodents: " << rodents <<endl;
	rodents++;
	cout << "after ++:" << endl;
	cout << "rats: " << rats << endl;
	cout << "rodents: " << rodents << endl;

	return 0;
}
/*
���
=============================
rats: 101
rodents: 101
after ++:
rats: 102
rodents: 102
*/


int main()
{
	int rats = 101;
	int& rodents = rats;
	//������ָ�������
	//1.�����ڴ���ʱ�����ʼ��
	//int& rodent;  //������
	//rodent = rats;

	//ָ������ӳٳ�ʼ��
	int* pt;
	pt = &rats;

	//2.����һ��������������������ַ��һֱ���䣬�൱��constָ��

	cout << "rats: " << rats << endl;
	cout << "rodents: " << rodents << endl;
	cout << "rats address: " << &rats << endl;
	cout << "rodents address: " << &rodents << endl;

	int bunnies = 50;
	rodents = bunnies;

	cout << "bunnies: " << bunnies << endl;
	cout << "rats: " << rats << endl;
	cout << "rodents: " << rodents << endl;
	cout << "bunnies address: " << &bunnies << endl;
	cout << "rats address: " << &rats << endl;
	cout << "rodents address: " << &rodents << endl;
	return 0;
}
/*
���
================================
rats: 101
rodents: 101
rats address: 00AFFCB4
rodents address: 00AFFCB4
bunnies: 50
rats: 50
rodents: 50
bunnies address: 00AFFC90
rats address: 00AFFCB4
rodents address: 00AFFCB4
*/

//rodents�ĵ�ַû�䣬��ֵ���޸���