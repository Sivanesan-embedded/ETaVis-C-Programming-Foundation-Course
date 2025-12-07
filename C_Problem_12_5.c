#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void multiply_elements(int,int,char[],char[],char[]);
int get_count(int);
void add_mul(int,int,char[]);
void add_node(int);
void print_nodes();
int check_value_of_k(int);

struct find {
    int data;
    struct find *next;
};

struct find *head;
struct find *temp;
struct find *current;

int main()
{
    char a[1000],b[1000],temp[1000];
    int len_a=0,len_b=0;
    head = (struct find*)malloc(sizeof(struct find));
    
    printf("Enter the numbers: ");
    scanf("%[^\n] %[^\n]",a,b);
    
    if (strlen(a) < strlen(b))
    {
        strcpy(temp,a);
        strcpy(a,b);
        strcpy(b,temp);
    }
    len_a = strlen(a) + 1;
    len_b = strlen(b);
    char arr[len_a*len_b+1];
    
    printf("%d %d\n",len_a,len_b);
    multiply_elements(len_a,len_b,a,b,arr);
    print_nodes();
}

void multiply_elements(int len_a,int len_b,char a[],char b[],char arr[])
{
    int mul = 0,rem = 0,inc=0,count=-1,br = 1;
    for(int i = len_b-1;i>=0;i--)
    {
        for (int j = len_a-2;j>=0;j--)
        {
            mul = (b[i] - '0') * (a[j] - '0') + rem;
            if (j == 0)
            {
                arr[inc] = (mul % 10) + '0';
               
                arr[++inc] = (mul / 10) + '0';
                rem = 0;
                
                inc++;
                count++;
                if (i == 0) add_node(count);
                
                count++;
                if (i == 0) add_node(count);
                
               
            }
            else if (get_count(mul))
            {
                arr[inc++] = (mul % 10) + '0';
                rem = mul / 10;
              
               count++;
               
            }
            else
            {
                arr[inc++] = mul + '0';
                rem = 0;
                
                count++;
                
            }
            if (i == 0)
            {
                if (br)
                {
                 head->data = count;
                 head->next = NULL;
                 temp = head;
                 br = 0;
                }
                else if (j != 0)
                {
                    add_node(count);
                }
            }
        }
    }
    arr[len_a*len_b] = 0;
    add_mul(len_a,len_b,arr);
}

int get_count(int a)
{
    int count = 0;
    while (a)
    {
        count++;
        a /= 10;
    }
    return count >= 2 ? 1 : 0;
}

void add_mul(int len_a,int len_b,char arr[])
{
    int count = 0,add=0,k=0,inc=1,rem = 0,mul_fact=1,br=1,ls=0,var = 0,enter = 1;
    
    char fin[len_a+len_b];
    
    for (int i = 1;i<((len_a-1+len_b));i++)
    {
        add = 0;
        if (i <= len_b-2)
        {
            k = i;
        for (int j = 0;j<=i;j++)
        { 
            add += arr[k] - '0' + rem;
            k += (len_a-1);
            rem = 0;
        }
        if (get_count(add))
        {
            arr[inc] = (add % 10) + '0';
            rem = add/10;
            inc++;
        }
        else
        {
            arr[inc] = add % 10 + '0';
            rem = 0;
            inc++;
        }
    }
   
   else if (i <= len_a-1)
   {
       k = i;
       for (int i = 0;i<len_b;i++)
       {
           add += arr[k] - '0' + rem;
           k += len_a - 1;
           rem = 0;
       }
           if (get_count(add))
           {
               arr[inc] = (add % 10) + '0';
               rem = add / 10;
               inc++;
           }
           else
           {
               arr[inc] = (add % 10) + '0';
               inc++;
           }
           k = i;
   }
   
   else
   {
       k += (len_a);
       var = k;
       for (int i = 0;;i++)
       {
           add += (arr[k] - '0') + rem;
           if (!(check_value_of_k(k)))
           {
               break;
           }
           k += (len_a-1);
           rem = 0;
       }
       if (get_count(add))
           {
               arr[inc] = (add % 10) + '0';
               rem = add / 10;
               inc++;
           }
           else
           {
               arr[inc] = (add % 10) + '0';
               inc++;
           }
           k = var;
           mul_fact++;
   }
}
arr[len_a-1+len_b] = 0;
printf("\nFinal answer of the String: \n\n");
for (int i = strlen(arr)-1;i >= 0;i--)
{
    if (arr[i] == '0' && (enter == 1))
    {
        continue;
    }
    else
    {
        enter = 0;
    }
    printf("%c",arr[i]);
}
printf("\n\n");
}
   
void add_node(int num)
{
    current = (struct find*)malloc(sizeof(struct find));
    current->data = num;
    current->next = NULL;
    temp->next = current;
    temp = current;
}

void print_nodes()
{
    temp = head;
    while (temp)
    {
        temp = temp->next;
    }
    temp = current;
}

int check_value_of_k(int k)
{
    int check = 1;
    temp = head;
    while (temp)
    {
        if (temp->data == k)
        {
            check = 0;
        }
        temp = temp->next;
    }
    return check;
}