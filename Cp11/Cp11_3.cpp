/*
	11.3 ��Ԫ
	Ϊ����Ҫ��Ԫ
	����һ�ڵ�Time���������������
	A = B*2.75;
	A = B.operator*(2.75);
	���������þͲ���
	A = 2.75*B;

	�����Ҫʵ��һ������Ҫ������õ����غ�������Ҫ��������֮�⣬������֮�������ʹ����˽�������أ�����Ҫ��Ԫ
	�������ַ�����������Ԫ�ǲ����ѡ��
*/

#include<iostream>
#include "mytime.h";
using namespace std;

int main()
{
	Time coding(2, 40);

	Time total;
	total = 1.5 * coding;
	total.Show();
	return 0;
}
/*
���
===================================
hour: 3
minutes: 60
*/