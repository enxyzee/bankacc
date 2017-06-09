//============================================================================
// Name        : Generic.h
// Author      : nancy zhou
// Version     : 1.1- variable types updated and all functions set to void.
// Copyright   : no stealing
// Description :
//============================================================================
#ifndef GENERIC_H
#define GENERIC_H
#include <iostream>
using namespace std;

class Generic
{
protected:
	double balance;
	int deposits;
	int withdrawls;
	double service;
	double intrate;//annual interest rate
	void print();
public:
	Generic(double bal, double anrate);
	virtual void deposit( double depo);
	virtual void withdraw(double wthd);
	virtual void calcInt();
	virtual void monthlyProc();
	virtual ~Generic(){};
};
#endif
