/*
	14.2 ˽�м̳�
	������ֻ�ܷ��ʻ���Ĺ��г�Ա
	����ĳ�Աֻ����ֱ����������ʣ����޷������¼̳У�Ҳ���ṩ�ⲿ���ʽӿ�
*/
#include<iostream>
#include<string>
using namespace std;

class People
{
private:
	string name;
	int score;
public:
	string Name() { return name; };
	int Score() { return score; };
};

class Student :private People
{
public:
	string getName() { return Name(); };
};

class Student2 :private People
{
public:
	//ʹ��using�����Ϳ����ṩ���ӿ�
	using People::Name;
};


int main()
{
	Student stu;
	//stu.Name(); //���ܷ���
	stu.getName(); //�Զ���һ�����з�����ʹ��

	//������һ�ַ�����using������Ϳ��Է���
	Student2 stu2;
	stu2.Name();
	return 0;
}