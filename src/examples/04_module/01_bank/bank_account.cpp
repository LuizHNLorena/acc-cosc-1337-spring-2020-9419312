//bank_account.cpp
#include "bank_account.h"

void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;

	}
	else
	{
		//usually write to a file
		throw InvalidAmount("Amount must be greater than 0.");

	}

}
void BankAccount::withdraw(int amount)
{
	if ( amount <= 0 )
	{
		
		throw InvalidAmount("Amount must be greater than 0.");
}
	else if(balance - amount > 0 && balance - amount < 0)
	{
		throw InvalidAmount("\n INsufficent funds \n");

	}
	else {
		balance -= amount;

	}
}
void BankAccount::open(int amount)
{
	
}
