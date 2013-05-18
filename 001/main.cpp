//Copyright (c) 2013 by Jukka Pietila
//See LICENSE for more details
//this file is used to calculate the solution to Project Euler's first problem

#include <iostream>
#include <vector>

int main(void)
{
	const int MAX_LIMIT = 1000;
	int sum = 0;

	//calculate the values divisible by three and five
	for (int i = 1; i < MAX_LIMIT; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;	
	}
	
	std::cout << sum << std::endl;

	return 0;
}
