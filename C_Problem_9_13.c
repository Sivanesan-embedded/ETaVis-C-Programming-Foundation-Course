#include <stdio.h>
int main()
{
    int arr[10000] = {0},stop = 1,count = 0,i=0,sum=0;
    
    while(stop)
    {
        printf("Enter a number %d: ",i+1);
        scanf("%d",&arr[i]);
        stop = arr[i];
        i++;
    }
   if (i >= 4)
   {
       if (arr[0] == arr[i-2])
       {
           printf("Success");
       }
       else
       {
           printf("Failure");
       }
   }
}