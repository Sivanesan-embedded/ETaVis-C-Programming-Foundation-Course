#include <stdio.h>
#include <string.h>

void check_character(char[],char);

int main()
{
    char str[1000],ch;
    
    printf("Enter the string: ");
    scanf("%s",str);
    
    printf("Enter a characrter: ");
    scanf(" %c",&ch);
    
    check_character(str,ch);
}

void check_character(char str[],char ch)
{
    int i = 0,count = 0;
    int k[strlen(str)];
    
    while (str[i])
    {
        if (str[i] == ch)
        {
            k[count++] = i+1;
        }
        i++;
    }
    
    for (int i = 0;i < count;i++)
    {
        printf("%d ",k[i]);
    }
}