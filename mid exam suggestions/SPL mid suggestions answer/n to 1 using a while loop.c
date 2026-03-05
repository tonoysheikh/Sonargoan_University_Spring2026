#include<stdio.h>

int main()
{
    int x;
    printf("Enter a integer number :");
    scanf("%d",&x);

    int i = x;

    while(i >= 1)
    {
        printf("%d\n",i);
        i--;
    }
    

    return 0;
}
