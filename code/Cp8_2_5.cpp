/*
	8.2.5 ���������������
*/

#include<iostream>
#include<string>
using namespace std;

string version1(const string& s1, const string& s2);
const string& version2(string& s1, const string& s2);
const string& version3(string& s1, const string& s2);

int main()
{
	string input = "It's not my fault";
	string result;

	//version1 ���ص���һ����ʱ���󲢸��Ƹ�result��version1ִ����ɺ���ʱ����ɾ��
	result = version1(input, "***");
	cout << "version1 result: " << result << endl;
	//version2 ����s1����
	result = version2(input, "###");
	cout << "version2 result: " << result << endl;
	//version3 ����һ����ʱ��������ã����³������
	result = version3(input, "@@@");
	cout << "version3 result: " << result << endl;
	return 0;
}

string version1(const string& s1, const string& s2)
{
	string temp;
	temp = s2 + s1 + s2;
	return temp;
}
const string& version2(string& s1, const string& s2)
{
	s1 = s2 + s1 + s2;
	return s1;
}
const string& version3(string& s1, const string& s2)
{
	string temp;
	temp = s2 + s1 + s2;
	return temp;
}

/*
���
==============================================
version1 result: ***It's not my fault***
version2 result: ###It's not my fault###
Segmentation fault (core dumped)

*/
