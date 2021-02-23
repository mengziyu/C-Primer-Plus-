#pragma once
#include<string>
class Brass
{
private:
	std::string fullName;
	long acctNum;
	double balance;
public:
	Brass(const std::string & s="Nullbody",long an=-1,double bal=0.0);
	void Deposit(double amt);
	double Balance() const;
	virtual void ViewAcct() const;
	virtual ~Brass() {};
};

class BrassPlus :public Brass
{
private:
	double maxLoan;
	double rate;
	double owesBank;
public:
	BrassPlus(const std::string& s = "Nullbody", long an = -1, double bal = 0.0,
		double ml=500,double r=0.11125);
	BrassPlus(Brass & ba,
		double ml = 500, double r = 0.11125);
	double Balance() const;
	virtual void ViewAcct() const;
	virtual ~BrassPlus() {};
};