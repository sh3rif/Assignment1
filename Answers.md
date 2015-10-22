# Assignment1
Name:sherif Ahmed Hassan
Seat Number:33762
Questions and Answers to c++ prime ch.10 Review

1-What is class?
A class is a definition of a user-defined type. A class declaration specifies how data is to be stored, and it specifies the methods (class member functions) that can be used to access and manipulate that data.

2- How does a class accomplish abstraction, encapsulation, and data hiding?
  
A class represents the operations you can perform on a class object with a public interface of class methods; this is abstraction.The class can use private visibility (the default) for data members, meaning that the data can be accessed only through the member functions; this is data hiding. Details of the implementation,such as data representation and method code, are hidden; this is encapsulation.

3- What is the relationship between an object and a class?

A class defines a type, including how it can be used.An object is a variable or another data object, such as that produced by new, which is created and used according to the class definition.The relationship between a class and an object is the same as that between a standard type and a variable of that type.

4- In what way, aside from being functions, are class function members different from class data members?

If you create several objects of a given class, each object comes with storage for its own set of data. But all the objects use the one set of member functions. (Typically, methods are public and data members are private, but that’s a matter of policy, not of class requirements.)

5- Define a class to represent a bank account. Data members should
include the
depositor’s name, the account number (use a string), and the balance.
Member functions
should allow the following:
n Creating an object and initializing it.
n Displaying the depositor’s name, account number, and balance
n Depositing an amount of money given by an argument
n Withdrawing an amount of money given by an argument
Just show the class declaration, not the method implementations.

Class BankAccount
{
Private:
	Char name[40];
	Char acctnum[25];
	Double balance;
Public:
BankAccount ( const char *client, const char num,double bal=0.0)
Void show (void);
Void deposit(double cash);
Void withdraw(double cash);
};

6- When are class constructors called? When are class destructors called?

A class constructor is called when you create an object of that class or when you explicitly call the constructor. A class destructor is called when the object expires.

7- Provide code for a constructor for the bank account class from
Chapter Review

#include <string.h>

BankAccount:: BankAccount ( const char *client , const char num ,double bal=0.0)
{
	Strncpy(name,client,39);
	Name[39]='\0';
	Strncpy(acctnum,num,24);
	Num[25]='\0';
	Balance = bal;
}

8- What is a default constructor? What is the advantage of having one?

A default constructor either has no arguments or has defaults for all the arguments. Having a default constructor enables you to declare objects without Initializing them, even if you’ve already defined an initializing
 constructor. It also allows you to declare arrays.


9-class stock
{
Private:
Std::String company;
Long shares;
Double share_value;
Double total_val;
void set_tot() { total_val = shares * share_val; }
public:
stock();
Stock(const std::string & co, long n = 0, double pr = 0.0);
~stock();
void buy(long num, double price);
void sell(long num, double price);
void update(double price);
void show()const;
const Stock & topval(const Stock & s) const;
int numshares() const { return shares; }
double shareval() const  { return share_value; }
double totalval() const { return total_val; }
const string & co_name() const { return company; }
};



10- What  are this and *this?
The this pointer is available to class methods. It points to the object used to invoke the method.Thus, this is the address of the object, and *this represents the object itself.



