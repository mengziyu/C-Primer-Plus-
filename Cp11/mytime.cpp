#include<iostream>
#include "mytime.h";
using namespace std;
Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

Time Time::operator+(const Time& t) const
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours;
	return sum; //���ܷ�����ʱ����������
}

Time Time::operator*(double t) const
{
	Time sum;
	sum.minutes = minutes * t;
	sum.hours = hours * t;
	return sum; //���ܷ�����ʱ����������
}

Time operator*(double m, const Time& t)
{
	Time sum;
	sum.minutes = t.minutes * m;
	sum.hours = t.hours * m;
	return sum; //���ܷ�����ʱ����������
}

std::ostream& operator<<(std::ostream& os, const Time& t)
{
	cout << "hours: "<<t.hours<<",minutes: "<<t.minutes;
	return os;
}

void Time::Show() const
{
	cout << "hour: " << hours << endl;
	cout << "minutes: " << minutes << endl;
}

