/*
	8.5.3 
	1.��ʾ���廯
	2.ʵ�����;��廯
	ʵ������
	���廯��
*/

#include<iostream>
#include<string>
using namespace std;

struct job
{
	char name[40];
	double salary;
	int floor;
};

template <typename T>
void Swap(T& a,T& b);
//��ʾ���廯
//�����ĺô��ǿ���ѡ������ĳЩ���ݽ��н�����������ȫ��
//��������ѡ��ԭ��ʱ����ģ�庯�� > ��ʾ���廯���� > ����ģ�庯��
//Swap<job> job�ǿ�ѡ�ģ���Ϊ�����Ĳ��������ѱ���
template<> 
void Swap<job>(job& j1, job& j2);
//����ԭ��
void Show(job& j);

int main_()
{

	job sue = {"Susan Yaffe",73000.60,7};
	job sidney = {"Sidney Taffe",78060.72,9};

	Swap(sue,sidney);
	Show(sue);
	Show(sidney);
	return 0;
}


template <typename T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = a;
}
template<>
void Swap<job>(job& j1, job& j2)
{
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;

	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}
//��������
void Show(job& j)
{
	cout << "name:" << j.name <<endl;
	cout << "salary:" << j.salary <<endl;
	cout << "floor:" << j.floor <<endl;
}

/*
���
========================================
name:Susan Yaffe
salary:78060.7
floor:9
name:Sidney Taffe
salary:73000.6
floor:7
*/

//ʵ������ģ�庯��������һ�������Ķ��壬��ֻ��һ����������Ĺ���
//������ʹ�õ�ʱ�򣬲Ÿ��ݾ����������ɺ������壬���˺���������ܱ�������ʵ����ִ��

//��int����Swap2(a,b),double ����Swap2(i,j)
//���ַ�ʽ����ʽʵ����
template <typename T>
void Swap2(T& a, T& b);

//ע�⣺��֪��Ϊɶ��Ҫ������ʾʵ��������ʾ���廯��Ҫ��������ʽʵ������Ҫ���Ұ���������ע�͵�����ʾʵ��������ʾ���廯
//����ʾ�쳣,˵δ�ҵ���������

//��ʾʵ������ʹ��ǰ��ʹ�þ����������ɺ�������
//�����������ɶ��
//template 
//void Swap2<job>(job& j1, job& j2);

//��ʾ���廯������ʾʵ������һ�� <>
//��ʾ���廯��������ʾʵ����һ�����
template<>
void Swap2<job>(job& j1, job& j2);


//��ʽʵ����,��ʾʵ����,��ʾ���廯 ����Ϊ��ʾ���廯

int main()
{
	
	return 0;
}
