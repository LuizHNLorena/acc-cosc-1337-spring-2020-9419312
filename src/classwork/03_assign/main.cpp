//#write includes statements

//write using statements for cin and cout
#include<iostream>

/*
Use a do while loop to prompt the user for
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
using std::cout;
using std::cin;

int factorial(int num);

int main() {
	int n;
	do {
		cout << "Enter a number(negative to stop): ";
		cin >> n;
		if (n >= 0) {
			cout << "Factorial of " << n << " is " << factorial(n) << "\n";
		}
	} while (n >= 0);
	return 0;