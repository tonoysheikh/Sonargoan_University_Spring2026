//1 3 5 7 9.......99
#include<stdio.h>

int main()
{
    int i;

    printf("Odd numbers from 1 to 100:\n");

    for(i = 1; i <= 100; i++)
    {
        if(i % 2 != 0)  // check if the number is odd
        {
            printf("%d\n", i);
        }
    }

    return 0;
}