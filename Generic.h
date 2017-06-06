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
	double intrate;
public:
	Generic(double bal, double intrest);
	virtual int deposit( double bal);
	virtual int withdrawl(double bal);
	void calcInt();
	void monthlyProc();

};