#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter two integer number :");
    scanf("%d %d",&x,&y);

    if(x > y)
    {
        printf("%d is the smallest number.",x);
    }
    else
    {
        printf("%d is the smallest number.",y);
    }

    return 0;
}
