/*
	9.2.2 ��̬�洢����
	��̬�����ڳ��������ڼ䶼������һֱ���ڣ���˷���̶����ڴ������洢��̬����
*/

#include<iostream>
using namespace std;	

//ȫ�ֱ����������ļ�Ҳ���Է���
int global = 1000;
//��̬������ֻ�ܸ��ļ�����
static int one_file = 50;

int main()
{
	return 0;
}

void func1(int n)
{
	//��̬������ֻ�������������
	//��ʹû�е������������countҲ����ھ�̬�ڴ���
	static int count = 0;
	int llama = 0;
}