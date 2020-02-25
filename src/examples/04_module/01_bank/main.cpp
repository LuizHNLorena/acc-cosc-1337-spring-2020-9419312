#include "bank_account.h"
#include<iostream>
using std::cout;


int main()
{
	BankAccount account(500);  ///b is 500
	int balance = account.get_balance();   // it will get class balance 
	cout << "Balance: " << balance;


	return 0;
}