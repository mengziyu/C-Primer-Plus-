/*
	8.5.5 ������ѡ��ʹ���ĸ�����
	���������Һ������̣�
	1.������ѡ�����б�����������ͬ�ĺ�����ģ�庯��
	2.���Ҳ���������ͬ������������ͬ�ĺ�������������ת���Ĳ�������
	3.�������ִ�к��������޻��ߴ��ڶ����ԣ������
*/

#include<iostream>
#include<string>
using namespace std;

void may(int);  //1
float may(float,float=3);//2
void may(char);//3
char* may(const char*);//4
//char may(const char &);//5
template<class T> void may(const T &);//6
template<class T> void may(const T *);//7

int main_()
{
	may('B');
	/*
		�õ����ĸ���
		1. 4 �� 7����ѡ���ַ���int�洢��������ʽ��ת����ָ������
		2. ��������ѡ��ѡ�ĸ����
		3. 1������2��char��int������ת����������������char��float��ǿ���Ե�
		4. 3 ��5��6��������1��2����Ϊ��������ȫƥ��
		5. 3��5������6����Ϊ6��ģ��
		6. ��������ȫƥ�䣬����,��ע��һ��
	*/
	return 0;
}

struct blot
{
	int a;
	char b[10];
};

struct blot2
{
	int a;
	char b[10];
};

//�����Ǵ���������ȫƥ�亯��Ҳ���Ա�����������
//1.��const��const����
void recycle(blot &); //1
void recycle(const blot &); //2

void recycle2(blot2); //3
void recycle2(const blot2); //4
int main__()
{
	blot ink = {25,"spots"};
	//����ɹ���const�ͷ�const�������֣�����recycle����ȫƥ�䣬��ink����const������ѡ��1
	//����ֻ���������ú�ָ��
	recycle(ink);

	blot ink2 = { 25,"spots" };
	//�������Ǹ�ֵ����ʱ���벻ͨ������ʱ�Ͳ���������
	//recycle2(ink2);
	return 0;
}

//2.������ȫƥ��ģ�庯�����Ͼ��������
template <class Type> void recycle3(Type& t);
//��ʾ���廯������
template <> void recycle3<blot>(blot& t);

//�����ַʱת��Ϊrecycle4<blot*>(blot* t)
template <class Type> void recycle4(Type t);
//�����ַʱת��Ϊrecycle4<blot>(blot* t),ָ������壬��Ϊת������
template <class Type> void recycle4(Type* t);

int main()
{
	blot ink2 = { 25,"spots" };
	recycle3(ink2);

	recycle4(&ink2);
	return 0;
}

