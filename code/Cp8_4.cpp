/*
	8.4 ��������
	1.��ʱʹ������
	���ƹ��ܲ�ͬ��������
	2.C++��θ���ÿ�����غ���
	��������Ϊÿ���������һЩ������
	long MyFunctionFoo(int ,float) --> ?MyFunctionFoo@@YAXH
*/

#include<iostream>
#include<string>
using namespace std;

//��ͬ��������
void print(const char* str, int width);
void print(double d, int width);
void print(long l, int width);
void print(int i, int width);
void print(const char* str);

//const �� ��const��������
void dribble(char* bits);
void dribble(const char* bits);

//����ֵ��������
long gronk(int n,float m);
//double gronk(int n,float m);

