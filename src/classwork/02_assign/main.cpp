//Write the include statement for decisions.h here
#include"decision.h"

//Write include for capturing input from keyboard and displaying output to screen
#include<iostream>



//Write namespace using statements for cout and cin
using namespace std;


int main()
{
	//create a double variable named hours
	double hours;
	//create a double variable named hourly_rate
	double hourly_rate;

	//Prompt user for keyboard input for hours and hourly_rate
	//save the input to variables hours and hourly_rate
	cout << "input for hours and hourly_rate: ";
	cin >> hours >> hourly_rate;




	//Create a double variable named gross_salary
	double gross_salary = 0.0;

	//Call the gross_pay function and save its return value to the gross_salary variable
	gross_salary = gross_pay(hours, hourly_rate);

	//Display the gross_salary variable as follows:


	//Example ---->>>     Gross pay: 150.00  
	cout << "Gross pay: " << gross_salary << endl;


	return 0;
}

