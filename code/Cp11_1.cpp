/*
	11.1 ���������
	1.���ص��������������Ч������������ܳ���@�������ַ�
	2.���ص�����
	���������������һ�����������û��Զ������ͣ���ֹ�Ա�׼��������
	����Υ��ԭ����������÷�����
	�磺
	int x;
	Time shiva;
	% x;	//invalid
	% shiva; //invalid
	�����޸���������ȼ�
	���ܴ����µ���������粻�ܶ���operator**()������
	���������������
	.
	.*
	::
	?:  ���������
	typeid
	const_cast
	reinterpret_cast
	static_cast

*/

#include<iostream>
#include "mytime.h";
using namespace std;

int main()
{
	Time coding(2,40);
	Time fixing(5,55);

	Time total;
	//��������÷�
	total = coding + fixing;
	total.Show();

	Time morefixing(3,28);
	//�������÷�
	total = morefixing.operator+(total);
	total.Show();
	//Ҳ������������
	total = coding + fixing + morefixing;

	total = coding * 1.5;
	return 0;
}
/*
���
====================================
hour: 7
minutes: 95
hour: 10
minutes: 123
*/