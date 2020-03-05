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
double BankAccount::rate = init_rate();

void display_balance(const BankAccount & b)
{
	std::cout << "\nBalance is: " << b.balance<< "\n";
}

std::ostream & operator<<(std::ostream & out, const BankAccount & b)
{
	

	out << "\nBalance is: " << b.balance << "\n";

	return out;

	// TODO: insert return statement here
}

std::istream & operator>>(std::istream & in, BankAccount & b)
{
	int amount;
	std::cout << "Enter deposit: " ;
	in >> amount;
	b.deposit(amount);
	return in; 


	// TODO: insert return statement here
}
