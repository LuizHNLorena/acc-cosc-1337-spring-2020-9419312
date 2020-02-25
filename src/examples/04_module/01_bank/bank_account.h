//bank_account.h
class BankAccount
{
public: 
	BankAccount(int b) : balance{ b } {};           //has the same name as class this is a construckter it will execute one time //b is 500 
	int get_balance()const { return balance; }
	void deposit(int amount);
	void withdraw(int amount);
private:
	int balance;
	
	

};
