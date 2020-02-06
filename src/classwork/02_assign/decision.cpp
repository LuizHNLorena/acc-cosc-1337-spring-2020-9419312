//Write the function code that returns the product of hours and hourly_rate.
#include<iostream>
#include "decision.h"


/*
NO OVERTIME
gross = hours * hourly_rate
OVERTIME
gross = 40 * hourly_rate + (hours - 40) * 1.5 * hourly_rate
*/
int gross_pay(int hours, int hourly_rate)
{
	
	int gross;

	if (hours >= 40) 
	{
		gross = 40 * hourly_rate + (hours - 40) * 1.5 * hourly_rate;
	}
	else 
	{
		gross = hours * hourly_rate;
	}
		
	return gross;
}
