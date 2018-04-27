
#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
public:
	BankAccount()
	{
		this->AccountHolder = "Fatima Khan";
		this->AccountNumber = 16101039;
		this->CurrentBalance = 1000000000;
	}
	BankAccount(string name, int number, float balance)
	{
		this->AccountHolder = name;
		this->AccountNumber = number;
		this->CurrentBalance = balance;
	}
	BankAccount(BankAccount& clone)
	{
		this->AccountHolder = clone.AccountHolder;
		this->AccountNumber = clone.AccountNumber;
		this->CurrentBalance = clone.CurrentBalance;
	}
	void display()
	{
		cout << "My name is " << this->AccountHolder << endl;
		cout << "My account number is " << this->AccountNumber << endl;
		cout <<"My Current balance is "<< this->CurrentBalance << endl;
	}
private:
	string AccountHolder;
	int AccountNumber;
	float CurrentBalance;
};
