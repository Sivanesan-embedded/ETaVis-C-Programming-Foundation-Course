#include <stdio.h>
int main()
{
    int prime = 1,count=0;
   for (int i = 2;i <= 9;i++)
   {
       prime = 1;
       for (int j = 2;j < i;j++)
       {
           if (!(i % j))
           {
               prime = 0;
           }
       }
       if (prime)
       {
           count++;
       }
   }
   printf("%d\n",count);
}