/*
	15.3.3 �쳣����
	throw ���쳣
	try catch �����쳣
*/
#include<iostream>
using namespace std;

double hmean(double a,double b);
int main()
{
	double x, y,z1,z2;
	try {
		x = 1;
		y = -1;
		z1 = hmean(x,y);
		cout << "z1 result:" << z1 << endl;
	}
	//�����쳣
	catch (const char* s) {
		cout << "z1 result:" << s << endl;
	}

	try {
		x = 2;
		y = 3;
		z2 = hmean(x, y);
		cout << "z2 result:" << z2 << endl;
	}
	catch (const char* s) {
		cout << "z2 result:" << s << endl;
	}

	return 0;
}

double hmean(double a, double b)
{
	if (a == -b)
	{
		throw "bad arguments";
	}
	return 2.0 * a * b / (a + b);
}
/*
���
==============================
z1 result:bad arguments
z2 result:2.4
*/