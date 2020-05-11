//write code for for stack_array and display each element to screen

#include<iostream>	
#include "arrays_mem.h"

void stack_array()
{
	const int SIZE = 5; 
		int hours[SIZE]; //SIMPLY ALLOCATING 5 SLOTS

		for (int = 0; i < SIZE; ++i)
		{
			hours[i] = i * 10;
		}
		for (int = 0; i < SIZE; ++i)
		{
			std::cout << hours[i] << "\n";

		}
		std::cout << "\n";

}

void stack_array_int()
{
	std::cout << "\n";
	const int SIZE = 5;
	int hours[SIZE] = {0, 10, 20, 30, 40}; // we can create an initializer list
	
	for (int = 0; i < SIZE; ++i)
	{
		std::cout << hours[i] << "\n";
	}
}
}
//when do you use which? when the values are small or big 

void stack_array_int_for_ranged() //use stack array reverse
{
	std::cout << "\n";
	const int SIZE = 5;
	int hours[SIZE] = { 0, 10, 20, 30, 40 }; // we can create an initializer list

	for (auto hour: hours) //iteration by value, meaning we are creating a copy for above numbers 
							// in the stack somewhere if we want to modify
	{
		std::cout << hour << "\n";
	}
}