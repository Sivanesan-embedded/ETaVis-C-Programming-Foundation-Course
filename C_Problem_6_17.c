#include <stdio.h>
int main()
{
   int x = 0,prime = 1,sum = 0;
   
   printf("Enter a number: ");
   scanf("%d",&x);
   
   for (int i = 2;i < x;i++)
   {
       if (!(x % i))
       {
           prime = 0;
           break;
       }
   }
   
   while (x)
   {
       sum += x % 10;
       x/=10;
   }
   if (prime && sum == 14)
   {
       printf("Prime & sum of digits is 14");
   }
   else if (!(prime) && sum == 14)
   {
       printf("Not Prime but sum is 14");
   }
   else if ((prime) && sum != 14)
   {
       printf("Prime & sum of digits is not 14");
   }
   else
   {
       printf("Not Prime & sum of digits is not 14");
   }
}