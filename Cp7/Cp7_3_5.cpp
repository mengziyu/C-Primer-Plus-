/*
	7.3.5 ָ���const
	1.������ʹ��const
	ʹ��const����������޸����ݵ��´���
	ʹ��const��Ϊ�β�ʱ������ͬʱ����constʵ�κͷ�constʵ��
*/

#include<iostream>
using namespace std;

int main()
{
	int age = 39;
	//ָ�볣����const ���ε���int��˵��ptָ���ֵ�����޸ģ���pt����ָ��������ַ
	const int* pt = &age;
	//*pt += 1; //invalid
	cout << "*pt: " << *pt << endl;
	age = 20; //����ͨ��pt�޸ģ�����ͨ��age�޸ģ�ageû�б�const����
	cout << "after *pt: " << *pt << endl;


	const float g_moon = 1.63;
	//float* pm = &g_moon; //��ֹ��const��ַ��ֵ����constָ��
	const float* pm = &g_moon; //valid

	
	int sloth = 3;
	const int* ps = &sloth;
	//����ָ��,finger ָ���ֵ�����޸ģ�������ָ��������ַ��
	int* const finger = &sloth;
	//finger = &age; //invalid

	cout << "*finger: " << *finger << endl;
	*finger = age;
	cout << "after *finger: " << *finger << endl;

	return 0;
}
/*
���
==================================
*pt: 39
after *pt: 20
*finger: 3
after *finger: 20
*/