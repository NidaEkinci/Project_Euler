#include <stdio.h>

int check_prime(unsigned long long int input)
{
	unsigned long long int factor;
	int test = 1;
	for(factor=2 ; factor<input ; factor++)
	{
		if(input % factor == 0)
		{
			test = 0;
			break;
		}
	}
	return test;
}

main()
{
	unsigned long long int factor, number=600851475143, max=0;
	for(factor=2 ; factor<=number ; factor++)	
	{
		if(check_prime(factor) == 1  &&  number % factor == 0) 
		{
			if(factor > max)  max = factor;
			number = number / factor;
		}
	}
	printf("The largest prime factor of the number 600851475143 : %llu", max);
}


