#include<stdio.h>

int main()
{
    int x;
    printf("Enter a integer number :");
    scanf("%d",&x);

    if(x >= 18)
    {
        printf("You are eligible to vote.");
    }
    else
    {
        printf("You are not eligible to vote.");
    }

    return 0;
}
