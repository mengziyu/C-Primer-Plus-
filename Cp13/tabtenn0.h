#pragma once
#include<string>
#include<iostream>
using namespace std;

//����
class TableTennisPlayer 
{

private:
	std::string firstname;
	std::string lastname;
	bool hasTable;
public:
	TableTennisPlayer(const std::string & fn="none",const std::string & ln="none",bool ht=false);
	void Name() const;
	bool HasTable() const { return hasTable; };
	void ResetTable(bool v) { hasTable = v; };
	~TableTennisPlayer()
	{
		cout << "TableTennisPlayer delete" << endl;
	}
};


/*
	������
	������洢�˻�������ݳ�Ա
	���������ʹ�û���ķ���
	�������������Լ��Ĺ��캯��
	��������Ը�����Ҫ��Ӷ�������ݳ�Ա�ͳ�Ա����
	�����಻�ܷ��ʻ���˽�г�Ա��������ͨ����������
*/
class RatedPlayer : public TableTennisPlayer
{
private:
	unsigned int rating;
public:
	RatedPlayer(unsigned int r = 0, const std::string& fn = "none", const std::string& ln = "none", bool ht = false);
	RatedPlayer(unsigned int r, const TableTennisPlayer& tp);
	unsigned int Reating() { return rating; };
	void Reset(unsigned int r) { rating = r; };
	~RatedPlayer()
	{
		cout << "RatedPlayer delete" << endl;
	}
};