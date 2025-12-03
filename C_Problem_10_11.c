#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    int arr[1000],k=0;
    
    printf("Enter a number: ");
    scanf("%s",a);
    
    while (a[k])
    {
        arr[k] = (a[k]) - 48;
        k++;
    }
    
    for (int i = 0;i < k;i++)
    {
        printf("%d",arr[i]);
    }
}