/*
	13.1 ��ļ̳�
*/

#include "tabtenn0.h"
#include <iostream>
using namespace std;


/*
	1.�������������ʱ���ȵ��û��๹�캯����Ȼ���ٵ��������๹�캯��
	2.�ͷ��ڴ�ʱ���ȵ��������������������ٵ��û�����������
*/
int main()
{
	TableTennisPlayer player1("Tara","Boomdea",false);
	RatedPlayer player2(1140,"Mallory","Duck",true);

	cout << "player1 name: ";
	player1.Name();
	cout << "player2 name: ";
	player2.Name();
	return 0;
}
/*
���
======================
TableTennisPlayer construct
TableTennisPlayer construct
RatedPlayer construct 1
player1 name: Boomdea,Tara
player2 name: Duck,Mallory
RatedPlayer delete
TableTennisPlayer delete
TableTennisPlayer delete
*/
