/*
	8.5.1
	1.���ص�ģ��
	2.ģ��ľ�����
	������������ģ��
	template <typename T>
	void f(T a,T b)
	
	�����������ʱ
	a=b ������

	�������ṹʱ
	if(a>b) ������

	��֮���ڸ��ӵ��������ͣ��������㲻����
	�����������һ��

*/

#include<iostream>
#include<string>
using namespace std;

template <typename T>
void Swap(T& a, T& b);

template <typename T>
void Swap(T* a, T* b, int n);

void Show(int a[]);
const int Lim = 8;
int main()
{
	int i = 10, j = 20;
	cout << "i: " << i << ",j: " << j << endl;
	cout << "Swap:" << endl;
	Swap(i, j);
	cout << "i: " << i << ",j: " << j << endl;

	int d1[Lim] = {0,7,0,4,1,7,7,6};
	int d2[Lim] = {0,7,2,0,1,9,6,9};
	Swap(d1,d2,Lim);
	cout << "d1[]:" << endl;
	Show(d1);
	cout << "d2[]:" << endl;
	Show(d2);

	return 0;
}

template <typename T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
void Swap(T a[], T b[], int n)
{
	T temp;
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}

}

void Show(int a[])
{
	for (int i = 0; i < Lim; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
/*
���
=================================
i: 10,j: 20
Swap:
i: 20,j: 10
d1[]:
0 7 2 0 1 9 6 9
d2[]:
0 7 0 4 1 7 7 6
*/