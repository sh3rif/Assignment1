#include "classes.h"

//BankAccount functions


void BankAccount::show ()
{
	cout<<"depositer name:"<<name<<endl;
	cout<<"account number:"<<acctnum<<endl;
	cout<<"balance:"<<balance<<endl;
}

void BankAccount::deposit(double cash)
{
	balance+=cash;
}

void BankAccount::withdraw(double cash)
{
	balance-=cash;
}


//person functions
void person::show()
{
	cout<<fname<<" "<<lname<<endl;
}
void person::formalshow()
{
	cout<<lname<<","<<fname<<endl;
}

//Move functions
void Move::showmove()
{
	cout<<"x="<<x<<",y="<<y<<endl;
}

Move Move::add(const Move & m) const
{
	Move temp;
	temp.x=x +m.x;
	temp.y=y +m.y;
	return temp;
}

void Move::reset (double a , double b )
{
	x=a;
	y=b;
}

