/*
	7.4 �����Ͷ�ά����

*/

#include<iostream>
using namespace std;

//���ݶ�ά����
int sum(int (*ar2)[4],int size);
//��ֱ��
int sum(int ar2[][4],int size);

int main()
{

	return 0;
}

int sum(int ar2[][4], int size)
{
	int total;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 4; i++)
		{
			total += ar2[i][j];
		}
	}
	return total;
}