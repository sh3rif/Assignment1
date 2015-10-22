#include <iostream>
#include <string>
#include "classes.h"
using namespace std;



/*
 * main is only random test cases
 * for the 3 classes
 */

int main()
{
	//bank class test
	BankAccount local("sherif","1",500.0); // creating account and initalizing it
	local.show();						   // checking account status
	local.deposit(100.0);				  // adding blance
	local.withdraw(50.0);				  // getting money
	local.show();						 // checking status

	//person class test
	person one;
	person two ("smythecraft");
	person three("kotb","sherif");
	
	one.show();
	one.formalshow();
	cout<<endl;

	two.show();
	two.formalshow();
	cout<<endl;

	three.show();
	three.formalshow();
	cout<<endl;

	//Move class test
	Move obj1(5,6);
	Move obj2(10,11);
	Move obj3;

	obj1=obj1.add(obj2);
	cout<<"obj1 ";
	obj1.showmove();

	obj2=obj2.add(obj1);
	cout<<"obj2 ";
	obj2.showmove();

	obj1.reset();
	cout<<"obj1 ";
	obj1.showmove();




	return 0;
}
