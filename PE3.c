#include<stdio.h>
main()
{
	int i=3,j=2,k,asal;
	for(i=3;i<600851475143;i++)
	{
		k=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				k=0;
			}
		}
		if(k==1)
		{
			i=asal;
		}
	}
	printf("En buyuk asal: %d",asal);
}
