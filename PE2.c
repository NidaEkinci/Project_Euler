#include<stdio.h>
main()
{
	int number1=1, number2=2, number3=3, sum=2;
	printf("%d, %d, %d,", number1, number2, number3);
	do
	{
		number1 = number2;
		number2 = number3;
		number3 = number1 + number2;
		if(number3 < 4000000)
		{
			printf("%d,", number3);
		}
		if(number3 % 2 == 0)
		{
			sum += number3;
		}
	}while(number3 <= 4000000);
	printf("\nSum of the terms : %d", sum);
}
