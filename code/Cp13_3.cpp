/*
	13.3 ��̬���м̳�
*/

#include <iostream>
#include "brass.h"
using namespace std;

int main()
{
	Brass dom("Dominic Banker",11224,4183.45);
	BrassPlus dot("Dorothy Banker",12118,2592.00);

	Brass& b1_ref = dom;
	//ָ�����������
	Brass& b2_ref = dot;
	//Balance �����麯�����������û�ָ��������ѡ�񷽷�
	b1_ref.Balance();
	b2_ref.Balance();
	//ViewAcct ���麯�������ݶ���������ѡ�񷽷�
	//��˵����������¶�����෽��ʱ��Ӧ�����෽������Ϊ���
	b1_ref.ViewAcct();
	b2_ref.ViewAcct();
	//������������Ϊ�鷽����������ͬ����֤�ܰ���ȷ��˳�������������
	return 0;
}
/*
���
==========================
Brass construct
Brass construct
BrassPlus construct
Brass Balance()
Brass Balance()
Brass ViewAcct()
BrassPlus ViewAcct()

*/