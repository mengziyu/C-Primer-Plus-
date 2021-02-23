/*
	4.8.3 ָ����ַ���
	1.strcpy �� strncpy
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

int main_()
{
	char animal[20] = "bear";
	const char* bird = "wren";  //"wren" ��ʾ�����ַ����ĵ�ַ���ڴ�Ὣ��ַ���ַ�����������
	char* ps;
	cout << "animal address: "<<(int*)animal <<endl;
	//cout << ps << endl;//δ��ʼ������ָ��
	ps = animal;  //psָ��animal�׵�ַ
	cout << "ps: " << ps << endl;
	cout << "ps address: " << (int*)ps << endl; //�����ַ��Ҫǿ��ת��

	ps = new char[strlen(animal) + 1]; //ps�Լ����ٵ�ַ
	strcpy(ps,animal);
	cout << "After new address:" <<endl;
	cout << "ps: " << ps << endl;
	cout << "ps address: " << (int*)ps << endl; //�����ַ��Ҫǿ��ת��

	delete[] ps;
	return 0;
}
/*
���
======================================
animal address: 010FF9C8
ps: bear
ps address: 010FF9C8
After new address:
ps: bear
ps address: 01310410

*/

int main()
{
	char food[20] = "carrots";
	strcpy(food,"a picnic basket filled with many goodies"); //Ҫ���Ƶ��ֽڴ������鳤�ȣ������ַ��Ḵ�Ƶ����������ֽ��У����������ڴ�����
	strncpy(food, "a picnic basket filled with many goodies",19);//ָ������
	food[19] = '\0'; //strncpyĬ��û�п��ַ���Ҫ�Լ�����
	return 0;
}