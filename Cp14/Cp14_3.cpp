/*
	14.3 ��̳�
*/
class A {
public:
	void func();
};
class B {
private:
	bool func() const;
};
class C : public A, public B {};


int main_()
{
	C c;
	//��ȻB::func��˽�еģ�����Ȼ������������C++�����غ������õĽ�����������ģ� �����ҵ�������ƥ��ĺ�����Ȼ���ټ��ɼ���
	//c.func();
	c.A::func();
	return 0;
}

//��̳�����

//ʹ�������̳У�	��IOFileֻ�������һ�����ݿ���
class File {};
class InputFile : virtual public File {};
class OutputFile : virtual public File {};
class IOFile : public InputFile, public OutputFile {};



//����ܲ�ʹ�ö�̳У��Ͳ�����
//���һ��Ҫ��̳У�����������������ݣ�Ҳ�ͱ�����������ʼ��������


