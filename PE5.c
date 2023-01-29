#include <stdio.h>
main()
{
	unsigned long long int j, smallest_multiple, product=1;
	int i, test;
	for(i=1 ; i<=20 ; i++) product = product * i;
	for(j=20 ; j <= product ; j++)
	{
		test = 1; i = 1;
		while(test == 1 && i <= 20)
		{
			if(j % i != 0) test = 0;
			else i++;
		}
		if(test == 1)
		{
			smallest_multiple = j;
			break;
		}
	}
	printf("Smallest multiple from 1 to 20 : %llu", smallest_multiple);
}


































