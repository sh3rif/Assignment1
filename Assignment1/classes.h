#ifndef CLASSES_H
#define CLASSES_H
#include <iostream>
#include <string>
using namespace std;

//BankAccount class Question 1
class BankAccount
{
private:
	char name[40];
	char acctnum[25];
	double balance;
public:
BankAccount(const char* client,const char* num,double bal=0.0)
{
	strncpy(name,client,39);
	name[39]='\0';
	strncpy(acctnum,num,24);
	acctnum[25]='\0';
	balance=bal;
}

void show ();
void deposit(double cash);
void withdraw(double cash);

};

class person{
private:
	static const int limit = 25;
	std::string  lname;
	char fname[limit];
public:
	person()
	{
		lname="";
		fname[0]='\0';
	}
	person( const std::string  ln,const char *fn="Hey you") 
	{
		lname=ln;
		strcpy(fname,fn);
	}

	void show();
	void formalshow();
};

class Move
{
private:
	double x;
	double y;
public:
	Move (double a=0,double b=0)
	{
		x=a;
		y=b;
	}

	void showmove();
	Move add(const Move & m) const;
	void reset (double a = 0, double b = 0);
};


#endif