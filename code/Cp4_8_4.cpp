/*
	4.8.4 ʹ��new������̬�ṹ
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	inflatable* ps = new inflatable;
	strcpy(ps->name,"Fabulous Frodo");
	ps->volume = 1.4;
	ps->price = 27.99;

	cout << "name: " << ps->name << endl;
	cout << "volume: " << (*ps).volume << endl;
	delete ps;
	return 0;
}
/*
���
=======================================
name: Fabulous Frodo
volume: 1.4
*/