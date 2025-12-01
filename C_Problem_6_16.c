#include <stdio.h>
int main()
{
   int x = 0,prime = 1;
   
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
   
   if (prime)
   {
       printf("Prime");
   }
   else
   {
       printf("Not Prime");
   }
}