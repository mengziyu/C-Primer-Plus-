#include "tabtenn0.h"
#include <iostream>
using namespace std;

//��ʵ��
TableTennisPlayer::TableTennisPlayer(const std::string & fn, const std::string & ln, bool ht):
	firstname(fn),lastname(ln),hasTable(ht) 
{
	cout << "TableTennisPlayer construct" << endl;
}

void TableTennisPlayer::Name() const
{
	cout << lastname << "," << firstname << endl;
}



RatedPlayer::RatedPlayer(unsigned int r, const std::string& fn, const std::string& ln, bool ht) :TableTennisPlayer(fn, ln, ht)
{
	cout << "RatedPlayer construct 1" << endl;
	rating = r;
}

//��Щ���췽��������

//RatedPlayer::RatedPlayer(unsigned int r, const std::string& fn, const std::string& ln, bool ht) :TableTennisPlayer(fn, ln, ht),rating(r)
//{
//	cout << "RatedPlayer construct 2" << endl;
//}

//RatedPlayer::RatedPlayer(unsigned int r = 0, const std::string& fn, const std::string& ln, bool ht)
//{
//	cout << "RatedPlayer construct 3" << endl;
//	rating = r;
//}

//����һ�����췽���ȼ�
//RatedPlayer::RatedPlayer(unsigned int r = 0, const std::string& fn, const std::string& ln, bool ht) :TableTennisPlayer()
//{
//	cout << "RatedPlayer construct 4" << endl;
//	rating = r;
//}

//���û���Ĭ�ϸ��ƹ��캯��
RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer& tp) :TableTennisPlayer(tp)
{
	cout << "RatedPlayer construct 5" << endl;
	rating = r;
}