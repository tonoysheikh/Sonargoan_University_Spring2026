#include<stdio.h>

int main()
{
    int x;
    printf("Enter your marks:");
    scanf("%d",&x);

    if(x >= 40)
    {
        printf("You passed the exam.",x);
    }
    else
    {
        printf("You failed the exam.",x);
    }

    return 0;
}
