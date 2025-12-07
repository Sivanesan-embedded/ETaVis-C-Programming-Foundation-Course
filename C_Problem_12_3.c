#include <stdio.h>
#include <string.h>

void find_sub_string(char[],char[]);

int main()
{
    char str[1000],sub_str[1000];
    printf("Enter the String: ");
    scanf("%s",str);
    printf("Enter the sub-String: ");
    scanf("%s",sub_str);
    
    find_sub_string(str,sub_str);
}

void find_sub_string(char str[],char sub_str[])
{
    int len_sub_str = strlen(sub_str);
    int i = 0,j=0,count = 0;
    
    while (str[i])
    {
        if (str[i] == sub_str[j])
        {
            count++;
            if (count == len_sub_str)
            {
                printf("%d\n",i-j+1);
            }
            j++;
            i++;
            continue;
        }
        count = 0;
        j = 0;
        i++;
    }
}