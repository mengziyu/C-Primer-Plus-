/*
	13.6 �������
*/
#include<iostream>
using namespace std;

//���麯��(������)
//1.��һ�������һ�����麯�����������ǳ�����
//2.�����಻��ʵ��������
//3.����̳г����࣬����Ҫʵ�ִ��麯�������û�У�����Ҳ�ǳ�����
//����������ã�Ϊ�˼̳�Լ����������֪��δ����ʵ��

class Shape {
public:
	//���麯��������Ҫ�� =0
	virtual void sayArea() = 0;
	void print() {
		cout << "hi" << endl;
	}
};


class Circle : public Shape {
public:
	Circle(int r) {
		this->r = r;
	}
	void sayArea() {
		cout << "Բ�������" << (3.14 * r * r) << endl;
	}
private:
	int r;
};

void main() {
	//Shape s;
	Circle c(10);
	c.sayArea();
}

/*
���
===========================
Բ�������314
*/