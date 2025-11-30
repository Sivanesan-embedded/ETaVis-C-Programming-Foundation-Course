#include <stdio.h>
int main()
{
    int num=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    if (num >= 50) printf("Success");
    else printf("Failure");
}