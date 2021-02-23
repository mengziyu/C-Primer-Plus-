/*
	15.4.1 RTTI ���н׶�����ʶ��
	dynamic_cast ����ָ������ǿת�����ת�����ɹ�����0������ָ��
	Ҳ�������������ͣ���������ʱû�ض���ֵ�ж��Ƿ�ɹ��������׳�bad_cast�쳣
*/

#include<iostream>
#include<typeinfo> //for bad_cast
using namespace std;

class Grand
{
private:
	int hold;
public:
	Grand(int h=0):hold(h) {}
	virtual void Speak() const
	{
		cout<<"Grand class"<<endl;
	}
	virtual int Value() const { return hold; }
};

class Superb:public Grand
{
public:
	Superb(int h = 0) :Grand(h) {}
	virtual void Speak() const
	{
		cout << "Superb class" << endl;
	}
	virtual void Say() const 
	{
		cout << "Superb value: " << Value() << endl;
	}
};

class Magnificent :public Superb
{
public:
	Magnificent(int h = 0) :Superb(h) {}
	virtual void Speak() const
	{
		cout << "Magnificent class" << endl;
	}
	virtual void Say() const
	{
		cout << "Magnificent value: " << Value() << endl;
	}
};




int main()
{
	Grand* pg = new Grand;
	Grand* ps = new Superb;
	Grand* pm = new Magnificent;

	Superb* p1 = dynamic_cast<Superb*>(pg);
	if (p1)
	{
		cout<<"pg -> Superb ok"<<endl;
	}
	else
	{
		cout << "pg -> Superb no" << endl;
	}

	Superb* p2 = dynamic_cast<Superb*>(ps);
	if (p2)
	{
		cout << "ps -> Superb ok" << endl;
	}
	else
	{
		cout << "ps -> Superb no" << endl;
	}

	Superb* p3 = dynamic_cast<Superb*>(pm);
	if (p3)
	{
		cout << "pm -> Superb ok" << endl;
	}
	else
	{
		cout << "pm -> Superb no" << endl;
	}

	Grand g1;
	Grand& rg = g1;
	//������������
	try {
		Superb& p4 = dynamic_cast<Superb&>(rg);
	}
	catch (bad_cast &) {
		cout << "rg cast -> Superb no" << endl;
	}
	return 0;
}

/*
���
========================
pg -> Superb no
ps -> Superb ok
pm -> Superb ok
rg cast -> Superb no

*/