//savings_account.h
#include"bank_account.h"

class  SavingAccount: public BankAccount
{
public: 
	SavingAccount() = default;
	SavingAccount(int b): BankAccount(b){}
	int get_balance()const { return balance + (1 / 12 * .025); }
private:

};

