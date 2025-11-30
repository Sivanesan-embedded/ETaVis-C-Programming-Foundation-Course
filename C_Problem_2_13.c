#include <stdio.h>
int main()
{
    int x=0,check=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    check = (x % 10) == ((x / 10) % 10);
    printf("Output: %d",check);
}