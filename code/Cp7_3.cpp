/*
	7.3 ����������
	1.ָ��������Ĺ�ϵ

*/

#include<iostream>
using namespace std;
//arr ��һ��ָ��
int sum_arr(int arr[],int n);
//ָ���ʾ��
int sum_arr2(int *arr,int n);

/*
ָ��������Ĺ�ϵ���ʽ
arr[i]==*(arr+i)
&arr[i]==arr+i

*/

int main()
{
	int cookies[8] = {1,2,4,8,16,32,64,128};
	cout << "total: " << sum_arr(cookies,8)<<endl;
	cout << "total2: " << sum_arr2(cookies,5)<<endl;
	return 0;
}

int sum_arr(int arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}
	return total;
}

int sum_arr2(int *arr, int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}
	return total;
}
/*
���
==================================
total: 255
total2: 31

*/