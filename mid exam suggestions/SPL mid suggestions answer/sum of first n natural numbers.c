#include<stdio.h>

int main()
{
    int x;
    printf("Enter a integer number :");
    scanf("%d",&x);
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum = sum + i;
    }
    printf("sum of 1st n natural number : %d\n",sum);
    

    return 0;
}