#include<stdio.h>

int main()
{
    int x;
    printf("Enter a integer number :");
    scanf("%d",&x);

    if(x > 0)
    {
        printf("%d is a positive number.",x);
    }
    else
    {
        printf("%d is a negative number.",x);
    }

    return 0;
}
