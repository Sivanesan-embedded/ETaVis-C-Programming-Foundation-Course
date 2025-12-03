#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    int arr[1000] =  {1,4,5,8,7,6,3,0},count=0,i=0;
    
    int k=0;
    
    while (count < 50)
    {
        if (arr[i] == 0)
        {
            i++;
            break;
        }
       a[i] = arr[i] + 48;
       i++;
       count++;
    }
    printf("%d\n\n",i);
    a[i] = 0;
    
    printf("%s\n",a);
}