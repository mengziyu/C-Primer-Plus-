/*
	9.2.4 ��̬�����ԡ��ⲿ������
	1.���������
		extern �ؼ��ֵ��÷�
*/

#include<iostream>
using namespace std;
//ȫ�ֱ����������ļ�����ʹ��
double warming = 0.3;

void update(double dt);
void local();
int main()
{
	cout << "Global warming: " << warming << endl;
	update(0.1);
	cout << "Global warming: " << warming << endl;
	local();
	cout << "Global warming: " << warming << endl;
	return 0;
}
/*
���
================================
Global warming: 0.3
Update global warming
Global warming: 0.4
local warming:0.8
Global warming: 0.4

*/
