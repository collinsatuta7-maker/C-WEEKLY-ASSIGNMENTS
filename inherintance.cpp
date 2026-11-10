//Inheritance
#include <iostream>
#include <string>
using namespace std;
//Base Class
class AccountHolder{
protected:
string name;	
//constructor to initialize name
public:
AccountHolder(string n){
	name = n;
}
//function to set name
void setName(string n){
	name = n;
}
//function to get name
string getName(){
	return name;
}		
};
//Derived class
class BankAccount: public AccountHolder{
private:
int accountNumber;
double balance;
public:
	BankAccount(string n, int accNo, double bal): AccountHolder(n){
		accountNumber = accNo;
		balance = bal;
	}
	
 int getAccountNumber(){
	 return accountNumber;
 }
 
 double getBalance(){
	 return balance;
 }
};
//Derived class
class SavingsAccount: public BankAccount{
private:
double interestRate;
public:
	SavingsAccount(double rate, string n, int accNo, double bal ): BankAccount(n, accNo, bal){
		interestRate = rate;
	}
double getInterestRate(){
	return interestRate;
}
void displayDetails(){
cout<<"Customer Name: "<<getName()<<endl;
cout<<"Account Number: "<<getAccountNumber()<<endl;
cout<<"Account Balance "<<getBalance()<<endl;
cout<<"Interest Rate "<<getInterestRate()<<"%"<<endl;
}
};
int main(){
SavingsAccount acc1(12,"John", 1234, 100000 );
acc1.displayDetails();




return 0;
}