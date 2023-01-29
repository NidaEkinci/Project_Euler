#include <stdio.h>
main()
{
	int i; 
	unsigned long long int sum_of_squares=0, sum=0, square, result;
	for(i=1 ; i <= 100 ; i++)
	{
		sum_of_squares = sum_of_squares + (i*i);
		sum += i;
	}
	square = sum * sum;
	result = square - sum_of_squares;
	printf("The difference between the sum of the squares and the square of the sum : %llu", result);
}
