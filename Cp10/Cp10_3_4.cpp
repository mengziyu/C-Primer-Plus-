/*
	10.3.4 ��������
*/

#include<iostream>
#include "Cp10_2_2.h"

int main()
{
	//��ʼ��stock1
	Stock stock1("NanoSmart",12,20.0);
	stock1.show();

	Stock stock2 = Stock("Boffo Obj",2,2.0);
	stock2.show();
	//stock2 ���ݱ�����
	stock2 = stock1;
	//���ﲻ�ǳ�ʼ���ˣ����Ǹ�ֵ��������Stock(...)��ʽ�ᴴ��һ����ʱ���󣬴�������Կ�����ʱ�������������ͷ�
	//��˳�ʼ������Ч
	stock1= Stock("Nifty Foods", 10, 50.0);
	stock1.show();

	//ʹ��const����
	//const ��ʾ�������ݲ����޸�
	//const Stock land = Stock("Klu",1,1.0);
	//Ϊ�˱�֤�������޸Ķ���ҲҪ����Ϊconst
	//land.show();
	return 0;
}

/*
���
=================================
call construct NanoSmart
Company: NanoSmart
Shares: 12
Price: 20
Total: 240
call construct Boffo Obj
Company: Boffo Obj
Shares: 2
Price: 2
Total: 4
call construct Nifty Foods
bye Nifty Foods
Company: Nifty Foods
Shares: 10
Price: 50
Total: 500
bye Boffo Obj
bye Nifty Foods
*/