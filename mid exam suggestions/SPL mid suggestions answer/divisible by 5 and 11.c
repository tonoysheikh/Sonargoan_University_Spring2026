#include<stdio.h>

int main()
{
    int x;
    printf("Enter a integer number :");
    scanf("%d",&x);

    if(x % 5 == 0 && x % 11 == 0)
    {
        printf("%d is divisible by 5 and 11.",x);
    }
    else
    {
        printf("%d is not divisible by 5 and 11.",x);
    }

    return 0;
}
