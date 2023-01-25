#include <stdio.h>
main()
{
    int i=0, sum=0;
    while(i < 1000)
    {
        if(i % 3 == 0)
        {
           printf("Multiples of 3 : %d\n", i);
           sum += i; 
        }
        else if(i % 5 == 0)
        {
            printf("Multiples of 5 : %d\n", i);
            sum += i;
        }
        i++;
    }
    printf("Multiples of 3 or 5 : %d", sum);
}
