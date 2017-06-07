//============================================================================
// Name        : Savings.cpp
// Author      : nancy zhou
// Version     : 1.0
// Copyright   : no stealing
// Description : 
//============================================================================
#include <iostream>
//#include <string>
#include "Savings.h"

using namespace std;
/*
protected:
	double balance;
	int deposits;
	int withdrawls;
	double service;
	double intrate;//annual interest rate
public:
	Generic(double bal, double anrate);
	virtual void deposit( double bal);
	virtual void withdraw(double bal);
	virtual void calcInt();
	virtual void monthlyProc();
	virtual ~Generic();
private:
	bool status;
protected:
	void withdraw();
	void deposit();
	void monthlyProc();
	virtual ~Savings(); 
	*/
Savings::Savings(double bal, double anrate) : Generic(bal, anrate)
{
	balance = bal;
	intrate = anrate;
	if (balance < 25)
		status = 0;
	else status = 1;
}
void Savings::withdraw(double wthd)
{

	if (status)
	{
		Generic::withdraw(wthd);
		if (balance < 25)
			status = 0;
	}
	else
	{
		cout << "Sorry, you have insuffcient funds, unable to make transaction." << endl;
		cout << "Your balance is currently $" << balance << endl;
	}
};
void Savings::deposit(double depo)
{
	Generic::deposit(depo);
	cout << "Your balance is now $" << balance << endl;
	if (balance < 25)
		status = 0;

};
void Savings::monthlyProc()
{

};
