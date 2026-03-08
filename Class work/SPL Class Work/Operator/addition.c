#include<stdio.h>
int main()
{
    int a , b;
    printf("Enter two integer number :");
    scanf("%d %d",&a , &b);

    int c = a + b;

    printf("Result : %d + %d = %d", a , b , c);

    return 0;
}