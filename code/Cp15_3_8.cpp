/*
	15.3.8 exception ��
	����ͨ��what()��ȡ�쳣��Ϣ
	�쳣���ͣ�
	logic_error ������exception�������������¼����쳣��
	domain_error ��ѧ�����������쳣
	invalid_argument ��Ч�����쳣
	lenght_error û���㹻�ռ���ִ�в����쳣
	out_of_bounds ����Խ���쳣

	runtime_error ������exception�������������¼����쳣��
	range_error  
	overflow_error ��ѧ������쳣
	underflow_error ��ѧ������쳣

	bad_alloc�쳣��new
	C++���´���new�����ڴ�����ˣ����׳�bad_alloc�쳣
	�ɰ汾�᷵��һ����ָ��
*/

#include<iostream>
#include<exception>
#include<stdexcept>
using namespace std;

//�̳�exception�Զ����쳣
class bad_hmean :public exception
{

};

int main()
{
	try {
		
	}
	catch (exception & e) {
		e.what();
	}
	return 0;
}