/*
	8.2.4 ���������ڽṹ
*/

#include<iostream>
#include<string>
using namespace std;

struct free_throws
{
	string name;
	int made;
	int attempts;
	float percent;
};

void display(const free_throws& ft);
void set_pc(free_throws& ft);
free_throws& accumulate(free_throws& target, const free_throws& source);

int main_()
{
	free_throws one = {"ifelsa brnch",13,14};
	free_throws two = {"andor knott",10,16};
	free_throws team = {"Throwgoods",0,0};

	set_pc(one);
	display(one);

	//accumulate ���ص��ǽṹ���ã��൱�ڷ���team������Ч�ʸ���
	display(accumulate(team, two));

	return 0;
}

void display(const free_throws& ft)
{
	cout << "name: " << ft.name<<endl;
	cout << "made: " << ft.made<<endl;
	cout << "attempts: " << ft.attempts <<endl;
	cout << "percent: " << ft.percent<<endl;
}
void set_pc(free_throws& ft)
{
	if (ft.attempts != 0)
	{
		ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
	}
	else
	{
		ft.percent = 0;
	}
}
free_throws& accumulate(free_throws& target, const free_throws& source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}

/*
���
================================
name: ifelsa brnch
made: 13
attempts: 14
percent: 92.8571
name: Throwgoods
made: 10
attempts: 16
percent: 62.5

*/


//��������ʱӦ��ע�������

const free_throws& clone(free_throws& ft);
const free_throws& clone2(free_throws& ft);

int main()
{
	free_throws one = { "ifelsa brnch",13,14 };
	//���ⷵ����ʱ����������
	//clone �������newguy���Զ��ͷţ�Ҳ��ȷ��ʲôʱ����ͷţ�������ͷ��ˣ�f1ָ��ľ��ǿ�
	const free_throws& f1 = clone(one);
	//���ⷵ����ʱ������ָ��
	//������������deleteָ��
	const free_throws& f2 = clone2(one);
	return 0;
}

//������ʱ����������
const free_throws& clone(free_throws& ft)
{
	free_throws newguy;
	newguy = ft; //�����ݿ�����newguy
	return newguy;
}
const free_throws& clone2(free_throws& ft)
{
	free_throws* pt=new free_throws;
	*pt = ft;//�����ݿ�����pt
	return *pt;
}