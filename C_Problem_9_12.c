#include <stdio.h>
int main()
{
    int arr[10000] = {0},stop = 1,count = 0,i=0,sum=0;
    
    while(stop)
    {
        printf("Enter a number %d: ",i+1);
        scanf("%d",&arr[i]);
        count++;
        sum += arr[i];
        stop = arr[i];
        i++;
    }
    
    printf("Count: %d\n",count);
    printf("Total sum: %d\n",sum);
}