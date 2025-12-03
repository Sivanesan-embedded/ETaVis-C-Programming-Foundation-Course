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
    i-=1;
   if ((i) % 2)
   {
       printf("%d\n",arr[i/2]);
   }
   else
   {
       printf("%d\n",(arr[i/2]+arr[i/2-1])/2);
   }
}