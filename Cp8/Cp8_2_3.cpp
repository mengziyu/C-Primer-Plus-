/*
	8.2.3 ��ʱ���������ò�����const
	1.ʲôʱ�򴴽���ʱ����
	�����ò�����constʱ����������������������������ʱ����
	-ʵ��������ȷ����������ֵ
	-ʵ�����Ͳ���ȷ��������ת��Ϊ��ȷ������
	ɶ����ֵ����д��=����ߵı���������ֵ
*/

#include<iostream>
using namespace std;

double refcube(const double &ra)
{
	return ra * ra * ra;
}
int main()
{
	double side = 3.0;
	double* pd = &side;
	double& rd = side;
	long edge = 5L;
	double lens[4] = {2.0,5.0,10.0,12.0};
	double c1 = refcube(side);
	double c2 = refcube(lens[2]); //��������Ԫ�������ͬ���ͱ������ƣ����ô�����ʱ����
	double c3 = refcube(rd);
	double c4 = refcube(*pd);
	double c5 = refcube(edge); //edge���Ͳ���ȷ��Ҫ��ʱ������������ת��double������raָ����
	double c6 = refcube(7.0); //������ֵ��������Ҫ������ʱ����
	double c7 = refcube(side+10.0);//������ֵ��������Ҫ������ʱ����

	//ע�⣺
	//��ʱ�����Զ��������Զ�ɾ����
	//������ʱ������ԭʼ���ݲ������޸�,������޸�ԭʼ���ݣ�Ҫ��ֹ������ʱ����
	return 0;
}
