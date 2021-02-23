/*
	7.10 ����ָ��
	1.��������
	2.����̽��

*/

#include<iostream>
using namespace std;

double betsy(int);
double pam(int);

// ��������ָ��(*pf)Ҫ�����ţ���Ȼ�ͱ��double *pf(int)��������ʾ����doubleָ������
void estimate(int lines, double (*pf)(int));


int main_()
{
	cout << "betsy: " <<endl;
	estimate(100, betsy);

	cout << "pam: " << endl;
	estimate(100, pam);
	return 0;
}

double betsy(int lns)
{
	return 0.05 * lns;
}
double pam(int lns)
{
	return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int))
{
	cout << "(*pf)(lines): " << pf(lines)<<endl;
	//Ҳ������������
	//cout << "(*pf)(lines): " << (*pf)(lines)<<endl;
}
/*
�����
=====================================
betsy:
(*pf)(lines): 5
pam:
(*pf)(lines): 7

*/
//�⼸���������Դ����飬����ʾһ����˼
const double* f1(const double arr[], int n);
const double* f2(const double [], int n);
const double* f3(const double *, int n);

//������
typedef const double* (*p_fun)(const double*, int);
int main()
{
	//����Ϊָ�����͸���ζ��庯��ָ�룿
	const double* (*p1)(const double*, int) = f1;
	//��autoҪ��
	auto p2 = f2;

	double av[3] = {1112.3,1242.6,2227.9};
	//��ͬ�ĵ��÷�ʽ
	cout << (*p1)(av, 3) << ":" << *(*p1)(av, 3) << endl;
	cout << p2(av, 3) << ":" << *p2(av, 3) << endl;

	//��������ָ������
	const double* (*ps[3])(const double*, int n) = { f1,f2,f3 };
	auto pt = ps;
	//����һ��ָ����ָ�������ָ��
	//�ڶ���*��ʾ����һ��ָ�����
	const double* (*(*ppt))(const double*, int n) = ps;

	cout << "f1:" << *ps[0](av, 3) << endl;
	cout << "f2:" << *ps[1](av, 3) << endl;
	cout << "f3:" << *ppt[2](av, 3) << endl;

	p_fun pa[3] = {f1,f2,f3};
	p_fun *pb= ps;
	p_fun (*pc)[3]= &ps;
	return 0;
}

const double* f1(const double arr[], int n)
{
	return arr;
}
const double* f2(const double arr[], int n)
{
	return arr + 1;
}
const double* f3(const double* arr, int n)
{
	return arr + 2;
}

/*
���
=============================================
010FFAF8:1112.3
010FFB00:1242.6
f1:1112.3
f2:1242.6
f3:2227.9

*/