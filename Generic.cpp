//============================================================================
// Name        : Generic.cpp
// Author      : nancy zhou
// Version     : 1.0
// Copyright   : no stealing
// Description :
//============================================================================
#include <iostream>

#include "Generic.h"
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
	virtual int deposit(double bal);
	virtual int withdrawl(double bal);
	virtual void calcInt();
	virtual void monthlyProc();
	*/

Generic::Generic(double bal, double anrate)
{
	balance = bal;
	intrate = anrate;
}//set balance and annual rate at construction
void Generic::deposit(double depo)
{
	balance += depo;
	deposits += 1;
}//add deposit to balance, increment #of deposits
void Generic::withdraw(double wthd)
{
	balance -= wthd;
	withdrawls += 1;
}//subtract withdrawl from balance, increment #of withdrawls
void Generic::calcInt()
{
	double morate = intrate / 12;//find monthly rate
	double moint = balance* morate;// find monthly interest amt
	balance += moint;//update bal
}

void print()
{
    cout<<"Your balance is: $"<<balance<<"."endl;
    cout<< "You made "<<withdrawls<<" withdrawals and "<<deposits<<" deposits."<<endl;
    cout<<"You were charged $"<<service<<"in service charges."<<endl;
    cout<<"End of monthly statement.Thank you"<<endl;
}

void Generic::monthlyProc()
{
	balance -= service;
	calcInt();
	//maybe a cout function here or individually in the checking and savings
	print();
	deposits = 0;
	withdrawls = 0;
	service = 0;//reset var

}

