//Write the function code that returns the product of hours and hourly_rate.
#include"decision.h"

double gross_pay(double hours, double hourly_rate) {
	double finalpay = 0.0;
	if (hours > 40)
	{
		finalpay = hourly_rate * 40 + (hours - 40) * hourly_rate*1.5;
	}
	else {
		finalpay = hours * hourly_rate;
	}
	return finalpay;
}