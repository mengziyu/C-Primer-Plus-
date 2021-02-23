/*
	7.3.2 ��������Ϊ������ζ��ʲô
	1.arr��Ϊ����ʵ������һ��ָ�룬���ַ�ʽ�����ô��ݶ�����ֵ����
	2.sizeof ָ�� �� sizeof ���鲻ͬ
*/

#include<iostream>
using namespace std;
//arr ��һ��ָ��
int sum_arr(int arr[], int n);
//ָ���ʾ��
int sum_arr2(int* arr, int n);

void sum_arr3(int arr[]);
void sum_arr4(const int arr[]);

int main()
{
	int cookies[8] = { 1,2,4,8,16,32,64,128 };
	cout << "sizeof cookies: " << sizeof(cookies)<<endl;
	sum_arr(cookies,8);
	sum_arr(cookies,5);

	cout << "cookies[1]: " << cookies[1] << endl;
	sum_arr3(cookies);
	cout << "modified cookies[1]: " << cookies[1] << endl;
	return 0;
}

int sum_arr(int arr[], int n)
{
	cout << "sizeof arr1: " << sizeof(arr) << endl;
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}
	return total;
}

int sum_arr2(int* arr, int n)
{
	cout << "sizeof arr2: " << sizeof(arr) << endl;
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}
	return total;
}

//�޸�����
void sum_arr3(int arr[])
{
	arr[1] = 66;
}
//��������
void sum_arr4(const int arr[])
{
	//arr[1] = 66; ���벻ͨ��
}
/*
���
=========================================
sizeof cookies: 32
sizeof arr1: 4
sizeof arr1: 4

*/


