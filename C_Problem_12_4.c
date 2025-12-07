#include <stdio.h>
#include <string.h>

void find_gap(char[]);

int main()
{
    char str[1000];
    
    printf("Enter the String: ");
    fgets(str,sizeof(str),stdin);
    find_gap(str);
}

void find_gap(char str[])
{
    int i = 0,count = 0;
    while (str[i])
    {
        if (str[i] == ' ')
        {
            count++;
        }
        i++;
    }
    printf("%d\n",count+1);
}