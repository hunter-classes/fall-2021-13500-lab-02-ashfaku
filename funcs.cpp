/*
Author: Ashfak Uddin
Course: CSCI-136
Instructor: Mike Zamansky
Assignment: Lab2B

This file contains the print_interval function, which prints out every number
betweeen L and U, including L, but excluding U. It will be used in main.cpp.
*/
#include <iostream>

void print_interval(int L, int U)
{
	for (int i = L; i < U; i++)
		std::cout << i << " ";
	std::cout << "" << std::endl;
}
