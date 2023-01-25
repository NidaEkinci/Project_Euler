#include <stdio.h>
main()
{
	int i, j, original ,product, remainder, reserved, max=0;
	for(i=999 ; i>=100 ; i--)
	{
		for(j=999 ; j>=100 ; j--)
		{
			product = i*j;
			remainder=0; reserved=0;
			while (product != 0)
	    	{
				remainder = product % 10;
				reserved = reserved * 10 + remainder;
				product /= 10;
			}
			original = i*j;
			if (original == reserved && original > max)
			{
				max = original;	
			}
		}
	}
	printf ("%d is a palindrome.", max);
}
