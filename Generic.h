//============================================================================
// Name        : Generic.h
// Author      : nancy zhou
// Version     : 1.0
// Copyright   : no stealing
// Description :
//============================================================================
#ifndef GENERIC_H
#define GENERIC_H
#include <iostream>
#include <string>

class Generic
{
protected:
	double balance;
	int deposits;
	int withdrawls;
	double service;
	double intrate;//annual interest rate
public:
	Generic(double bal, double anrate);
	virtual int deposit( double bal);
	virtual int withdrawl(double bal);
	virtual void calcInt();
	virtual void monthlyProc();
protected:
	double balance;
	int deposits;
	int withdrawls;
	double service;
	double intrate;//annual interest rate
public:
	Generic(double bal, double anrate);
	virtual int deposit(double depo);
	virtual int withdrawl(double wthd);
	virtual void calcInt();
	virtual void monthlyProc();
	virtual ~Generic();
}; 
#endif