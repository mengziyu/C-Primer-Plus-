#define _CRT_SECURE_NO_WARNINGS
#include "dma.h"
#include<iostream>
#include<string>
using namespace std;

baseDMA::baseDMA(const char* l, int r)
{
	lable = new char[std::strlen(l) + 1];
	std::strcpy(lable,l);
	rating = r;
}
baseDMA::baseDMA(const baseDMA& rs)
{
	lable = new char[std::strlen(rs.lable) + 1];
	std::strcpy(lable, rs.lable);
	rating = rs.rating;
}
baseDMA:: ~baseDMA()
{
	delete[] lable;
}
baseDMA& baseDMA::operator=(const baseDMA& rs)
{
	if (this == &rs)
		return *this;
	delete[] lable;
	lable = new char[std::strlen(rs.lable) + 1];
	std::strcpy(lable, rs.lable);
	rating = rs.rating;
}
std::ostream& operator<<(std::ostream& os, const baseDMA& rs)
{
	return os;
}


//������ʵ��
//��������Щ����ҪΪ��������ڴ棬�������������������ʱ�ͷŲ��ܹ��ɹ�

//���ù��캯��
hasDMA::hasDMA(const char* l, int r,const char* s):baseDMA(l,r)
{
	style = new char[std::strlen(l) + 1];
	std::strcpy(style, l);
}

//���û��ิ�ƹ���
hasDMA::hasDMA(const hasDMA& hs) :baseDMA(hs) 
{
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
}
hasDMA:: ~hasDMA()
{
	delete[] style;
}
hasDMA& hasDMA::operator=(const hasDMA& hs)
{
	if (this == &hs)
		return *this;
	//���û��ำֵ�����
	baseDMA::operator=(hs);
	delete[] style;
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
}
std::ostream& operator<<(std::ostream& os, const hasDMA& hs)
{
	return os;
}