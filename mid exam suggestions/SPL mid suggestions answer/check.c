#include<stdio.h>

int main()
{
   int x;
   scanf("%d",&x);


   if(x >= 1 && x <= 100)
   {
        printf("This number lies between 1 to 100");
   }
   else
   {
        printf("This number does not lie between 1 to 100");
   }


   return 0;
}
