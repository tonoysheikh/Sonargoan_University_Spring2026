#include<stdio.h>

int main()
{
    int x;
    printf("Enter a alphabet number :");
    scanf("%c",&x);

    if(x == 'A' || x == 'E'|| x == 'I'||x == 'O'||x == 'U'||x == 'a'||x == 'e'||x == 'i'||x == 'o'||x == 'u')
    {
        printf("%c is a vowel.",x);
    }
    else
    {
        printf("%c is a consonant.",x);
    }

    return 0;
}
