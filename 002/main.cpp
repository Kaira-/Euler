//Copyright (c) 2013 by Jukka Pietila
//See LICENSE for more details
//This file is used to calculate the solution to Project Euler's second problem
#include <iostream>

long int fib(int);

int main(void)
{
	const long int MAX = 4000000;
	long int sum = 2;	//we take 2 into count from the beginning
	int it = 1;	//used to keep count of the largest index of fibonacci numbers under 4,000,000
	
	for (int i = 3; ; i++)
	{
		long int fibo = fib(i);
		if (fibo >= MAX)
		{
			it = i;
			break;
		}
	}

	//then, go over all the fibonacci values and find those that are divisible by 2
	for (int i = 3; i <= it; i++)
	{
		if (fib(i) % 2 == 0)
			sum += fib(i);
	}

	std::cout << sum << std::endl;
	
	return 0;
}

long int fib(int n)
{
	long int a = 1, b = 2;
	for (int i = 3; i <= n; i++)
	{
		long int c = a + b;
		a = b;
		b = c;
	}
	return b;
}
