#include <stdio.h>
int main()
{
    int x=0,check=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    check = (x/100) == (x % 100);
    printf("Output: %d",check);
}