#include "bank_account.h"
#include<iostream>
#include<vector>
using std::cout; using std::vector;


int main()
{
	BankAccount a(50), b(10);
	display_balance(a);
	std::cin >> a;
	cout << a; 
	

	vector<BankAccount> accounts{ BankAccount(100),
	BankAccount(200), BankAccount(300) };

	for (auto act : accounts) 
	{
		cout << act.get_balance() << "\n";
	}

	BankAccount account(500);  ///b is 500
	int balance = account.get_balance();   // it will get class balance 
	cout << "Balance: " << balance;
	try {

		account.deposit(-10);

	}
	catch (InvalidAmount e)
	{

		cout << e.get_message();

	}

	
}

void BankAccount::open(int amount)
{
	if (balance > 0)
	{
		throw InvalidAmount("account ready  open, use deposit");
	}

	if (amount >= min_balance_to_open)

	{
		balance += amount;
	}
	else
	{
		throw InvalidAmount("A deposit of at least 25...");
	}
	
}