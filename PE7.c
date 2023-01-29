#include <stdio.h>
int check_prime(unsigned long long int input)
{
	unsigned long long int i;
	int test=1;
	for(i=2 ; i < input ; i++)
	{
		if(input % i == 0)
		{
			test = 0;
			break;
		}
	}
	return test;
}

main()
{
	unsigned long long int i=2; 
	int number=0; 
	while(number < 10001)
	{
		if(check_prime(i) == 1)	number++;
		i++;
	}
	printf("The 10 001st prime number : %llu", i-1);
}
