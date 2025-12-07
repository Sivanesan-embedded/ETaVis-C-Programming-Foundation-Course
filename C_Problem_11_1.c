#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    
    int *p = &x;
    *p = 50;
    
    printf("The changed value due to pointer is: %d",x);
}