/*
	8.1 ��������
	1.����������C++Ϊ��߳��������ٶ������ĸĽ������ٺ�������ʱ������ȥ����ʡʱ�䣬��Ȼ������ռ�ø���
	�ڴ�Ϊ���۵ģ���Ϊ�����������ڵ��ô�����һ������
	2.�Ǹ����ѡ��
	���ִ�д���ʱ��ϳ������ô���С������ѡ����������ʡ��ʱ���ٵÿ���������
	���ִ�д���ʱ��϶̣����ô��۴󣬿�ѡ������
	3.�����������ܵ����Լ������Բ��ܵݹ�
	4.�������
*/

#include<iostream>
using namespace std;

//c���Եĺ�ʵ��
#define SQUARE(X) X*X
//��ʵ�ֵ��û���Щ����
/*
a = SQUARE(5.0) => a=5.0*5.0; //����
b = SQUARE(4.5+7.5) => a=4.5+7.5*4.5+7.5;//������
d = SQUARE(c++) => a=c++*c++;//������
*/

inline double square(double x)
{
	return x * x;
}

int main()
{
	double a, b;
	double c = 13.0;
	
	a = square(5.0);
	b = square(4.5+7.5);

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "square(c): " << square(c) << endl;
	cout << "square(c++): " << square(c++) << endl;
	cout << "c: " << c << endl;
	cout << "SQUARE(c): " << SQUARE(c++) << endl; //����������
	cout << "c: " << c << endl;

	return 0;
}
/*
���
=================================
a: 25
b: 144
square(c): 169
square(c++): 169
c: 14
SQUARE(c): 196
c: 16
*/
