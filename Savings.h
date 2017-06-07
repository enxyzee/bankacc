//============================================================================
// Name        : Savings.h
// Author      : nancy zhou
// Version     : 1.0
// Copyright   : no stealing
// Description :
//============================================================================
#ifndef SAVINGS_H
#define SAVINGS_H
#include <iostream>
#include "Generic.h"
using namespace std;
class Savings : public Generic
{
private:
	bool status;
public:
	Savings(double bal, double anrate);
	void withdraw(double wthd);
	void deposit(double depo);
	void monthlyProc();
	virtual ~Savings(){};
};
#endif
