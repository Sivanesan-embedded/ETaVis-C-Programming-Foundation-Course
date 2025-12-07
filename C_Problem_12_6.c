#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void get_addition1(char[],char[],char[],int,int);
void get_addition2(char[],char[],char[],int,int);
int check_addition_count(int);
void subtract(char[],char[],char[],int,int);
void call_greater_subtract(char[],char[],char[],int,int);
void call_func_subtract(char[],char[],char[],int,int);
int get_borrow(char[],char[],int,int);
int check_value_negative(char[],char[]);
void multiply_elements(int,int,char[],char[],char[]);
int get_count(int);
void add_mul(int,int,char[]);
void add_node(int);
void print_nodes();
int check_value_of_k(int);
void find_length_2_strings_2(char[],char[]);
void count_of_divisor_value_2(char[],char[]);
int check_negative(char[],char[]);
void add_elements(char[],char[]);
int get_addition_count(int);
void call_func_subtract_2(char[],char[],char[],int ,int);
int get_borrow_2(char[],char[],int,int);


struct find {
    int data;
    struct find *next;
};

struct find *head;
struct find *temp;
struct find *current;
int negative = 0;
int len_a,len_b,use;
char initial[1000];
char previous[1000];

int main()
{
    char choice[5];
    while (1)
    {
        printf("1. Addition\n\n");
        printf("2. Subtraction\n\n");
        printf("3. Multiplication\n\n");
        printf("4. Division\n\n");
        printf("exit to come out\n\n");
        printf("Enter the choice to proceed: ");
        scanf("%s",choice);
        printf("\n");
    if (choice[0] == 49)
    {
    char x[1000],y[1000];
    int len_x,len_y;
    
    printf("Enter the value of x: ");
    scanf("%s",x);
    
    printf("Enter the value of y: ");
    scanf("%s",y);
    
    len_x = strlen(x);
    len_y = strlen(y);
    
    char add[len_x+2];
    if (len_x == len_y)
    {
    get_addition1(x,y,add,len_x,len_y);
    }
    else if (len_x > len_y)
    {
    get_addition2(x,y,add,len_x,len_y);
    }
    else
    {
        get_addition2(y,x,add,len_y,len_x);
    }
    printf("\n\n");
    }
    if (choice[0] == 50)
    {
        char x[1000],y[1000],sub[1000];
    int len_x,len_y;
    
    printf("Enter the value of X: ");
    scanf("%s",x);
    
    printf("Enter the value of Y: ");
    scanf("%s",y);
    
    len_x = strlen(x);
    len_y = strlen(y);
    
    subtract(x,y,sub,len_x,len_y);
    }
    if (!(strcmp(choice,"exit")))
    {
        break;
    }
    if (choice[0] == 51)
    {
        char a[1000],b[1000],temp[1000];
    int len_a=0,len_b=0;
    head = (struct find*)malloc(sizeof(struct find));
    
    printf("Enter the number x: ");
    scanf("%s",a);
    printf("Enter the number y: ");
    scanf("%s",b);
    
    if (strlen(a) < strlen(b))
    {
        strcpy(temp,a);
        strcpy(a,b);
        strcpy(b,temp);
    }
    len_a = strlen(a) + 1;
    len_b = strlen(b);
    char arr[len_a*len_b+1];
    
    //printf("%d %d\n",len_a,len_b);
    multiply_elements(len_a,len_b,a,b,arr);
    print_nodes();
    }
    if (choice[0] == 52)
    {
         char a[1000],b[1000],sub[1000];
    
    printf("Enter the value x: ");
    scanf("%s",a);
    printf("Enter the value y: ");
    scanf("%s",b);
    use = strlen(b)-1;
    strcpy(initial,b);
    
    // find_length_of_both_strings
    find_length_2_strings_2(a,b);
    // add_divisor_until_below_it_reaches_over
    count_of_divisor_value_2(a,b);
    // with_no_add_upto_specific_no_to_get_remainder
    call_func_subtract_2(a,previous,sub,strlen(a),strlen(previous));
    }
    }
}

void get_addition1(char x[],char y[],char add[],int len_x,int len_y)
{
    int addition = 0,rem = 0,k = 0;
    for (int i = len_x-1;i >= 0;i--)
    {
        addition = (x[i] - '0') + (y[i] - '0') + rem;
        
        if (check_addition_count(addition))
        {
            if (i == 0)
            {
                //printf("i == 0 executing\n\n");
                add[k++] = (addition % 10) + 48;
                //printf("i==0 1: %c\n",add[k++]);
                add[k++] = (addition / 10) + 48;
                //printf("i == 0 2: %c\n",add[k++]);
            }
            else
            {
            rem = addition / 10;
            add[k++] = (addition % 10) + 48;
            //printf("1: %c\n",add[k++]);
            }
        }
        else
        {
            add[k++] = (addition) + 48;
            rem = 0;
            //printf("2: %c\n",add[k++]);
        }
        //printf("addition: %d\nremainder: %d\n",addition,rem);
    }
    add[len_x+1] = 0;
    printf("\nAddition: \n\n");
    for (int i = strlen(add)-1;i >=0;i--)
    {
        printf("%c",add[i]);
    }
}

int check_addition_count(int addition)
{
    int count = 0;
    
    while (addition)
    {
        count++;
        addition /= 10;
    }
    
    if (count == 2)
    {
        return 1;
    }
    return 0;
}

void get_addition2(char x[],char y[],char add[],int len_x,int len_y)
{
     int addition = 0,rem = 0,k = 0,last = len_x,big=0;
     //printf("%d %d\n",len_x,len_y);
    for (int i = len_y-1;i >= 0;i--)
    {
        addition = (x[--len_x] - '0') + (y[i] - '0') + rem;
       
        if (check_addition_count(addition))
        {
            rem = addition / 10;
            add[k++] = (addition % 10) + 48;
            //printf("1: %c\n",add[k++]);
        }
        else
        {
            //printf("%d\n",k);
            add[k++] = (addition) + 48;
            rem = 0;
            //printf("2: %c\n",add[k++]);
        }
    }
        //printf("\n\n%s\n",add);
       // printf("Value of len_x: %d\n",len_x);
        while (--len_x!=-1)
        {
            addition = (x[len_x] - '0') + (rem);
            //printf("%d add: \n\n",addition);
        if (check_addition_count(addition))
            {
            if (len_x == 0)
            {
                //printf("i == 0 executing\n\n");
                add[k++] = (addition % 10) + 48;
                //printf("i==0 1: %c\n",add[k++]);
                add[k++] = (addition / 10) + 48;
                //printf("i == 0 2: %c\n",add[k++]);
                big = 1;
            }
            else
            {
            rem = addition / 10;
            add[k++] = (addition % 10) + 48;
            //printf("1: %c\n",add[k++]);
            }
            k++;
        }
        else
            {
            rem = addition / 10;
            add[k++] = (addition % 10) + 48;
            //printf("1: %c\n",add[k++]);
            }
        }
        //printf("addition: %d\nremainder: %d\n",addition,rem);
    if (big)
    {
    add[last+1] = 0;
    printf("%d\n",last+1);
    }
    else
    {
        add[last] = 0;
        //printf("%d\n",last);
    }
    printf("Addition: \n\n");
    for (int i = strlen(add)-1;i >=0;i--)
    {
        printf("%c",add[i]);
    }
}

void subtract(char x[],char y[],char sub[],int len_x,int len_y)
{
    if (len_x == len_y)
    {
        if (check_value_negative(x,y))
        {
            negative = 0;
            call_greater_subtract(x,y,sub,len_x,len_y);
        }
        else
        {
            goto neg_func;
        }
    }
    else if (len_x > len_y)
    {
        negative = 0;
        call_func_subtract(x,y,sub,len_x,len_y);
    }
    else
    {
neg_func:negative = -1;
        call_func_subtract(y,x,sub,len_y,len_x);
    }
}

void call_greater_subtract(char x[],char y[],char sub[],int len_x,int len_y)
{
    
    int t_len_x = len_x-1;
    int t_len_y = len_y-1;
    int i = 0,br = 1;
    
    int subtract = 0;
    for (i = 0;i < len_x;i++)
    {
        subtract = (x[t_len_x--] - '0') - (y[t_len_y--] - '0');
        sub[i] = subtract + 48;
    }
    sub[i] = 0;
    printf("\n\nThe answer is:  \n\n");
    for (int i = strlen(sub)-1; i >= 0; i--)
    {
        if (sub[i] == 48 && br)
        {
            continue;
        }
        printf("%c",sub[i]);
        br = 0;
    }
    printf("\n\n");
}

void call_func_subtract(char x[],char y[],char sub[],int len_x,int len_y)
{
    int t_len_x = len_x-1;
    int t_len_y = len_y-1;
    int value=0;
    int subtract,i = 0,br = 1;
    //printf("%d %d\n\n",len_x,len_y);
    for (i = 0;i < len_y;i++)
    {
        value = x[t_len_x] - '0';
        //printf("\n\n%c %c\n\n",x[t_len_x], y[t_len_y]);
        if (x[t_len_x] - '0' < y[t_len_y] - '0')
        {
            //printf("Yes executing: ");
            value = get_borrow(x,y,t_len_x,t_len_y);
            //printf("%d\n",value);
            //printf("%d: Changed value: %c\n",t_len_x-1,x[t_len_x-1]);
        }
        subtract = value - (y[t_len_y--] - '0');
        //printf("Subtract: %d\n\n",subtract);
        sub[i]=  subtract + 48;
        t_len_x--;
    }
    while (t_len_x != -1)
    {
        sub[i++] = x[t_len_x--];
    }
    
   // printf("%s\n",sub);
    sub[strlen(x)] = 0;
    printf("\n\nThe answer is:  \n\n");
    if (negative == -1)
    {
        printf("-");
    }
    for (int i = strlen(x)-1;i>=0;i--)
    {
        if (sub[i] == 48 && br)
        {
            continue;
        }
        printf("%c",sub[i]);
        br = 0;
    }
    printf("\n\n");
}

int get_borrow(char x[],char y[],int len1,int len2)
{
    int zero = 0,t_len1 = len1-1,value;
    while (x[t_len1] == '0')
    {
        t_len1--;
        zero++;
        //printf("1 executing\n\n");
    }
    if (zero)
    {
        x[t_len1] = ((x[t_len1] - 48) - 1)+48;
        t_len1++;
        //printf("2 executing\n\n");
    }
   // printf("%d\n",zero);
    while ((t_len1 != len1) && (zero))
    {
        x[t_len1] = 57;
        t_len1++;
        //printf("3 executing\n\n");
        if (t_len1 == len1)
        {
           return (x[t_len1]-48)+10;
        }
    }
    
    x[len1-1] = ((x[len1-1] - 48) - 1)+48;
    value = (x[len1]-48)+10;
    return value;
}

int check_value_negative(char a[],char b[])
{
    int count=0,i=0;
    
    while (a[i])
    {
        if (a[i] == b[i])
        {
            count++;
        }
        if (a[i] < b[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
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

void find_length_2_strings_2(char a[],char b[])
{
    len_a = strlen(a) - 1;
    len_b = strlen(b) - 1;
}

void count_of_divisor_value_2(char a[],char b[])
{
    int count = 0,check = 0;
    
    while (1)
    {
        //printf("out: %s %s\n",a,b);
        //printf("%d\n",strlen(b));
    check = check_negative(a,b);
    if (check)
    {
        if (check == 2) 
        { 
            count++;
            break;
        }
        
        if (check == 10) 
        {
            //printf("Success\n");
            strcpy(previous,b);
            count++;
            break;
        }
        
        if (check == 1)
        {
            //printf("Success2\n");
            break;
        }
    }
    else
    {
        //printf("before count loop : %s\n\n",b);
        count++;
        add_elements(a,b);
        //printf("W\n");
        //printf("After: %s\n\n",b);
        //printf("Size of b: %d\n",strlen(b));
    }
    }
    //printf("previous:%s\n\n",previous);
    printf("\nQuotient: %d\n",count);
}

int check_negative(char a[],char b[])
{
    int len_a = strlen(a) - 1;
    int len_b = strlen(b) - 1;
   // printf("check negative: %s %s\n\n",a,b);
    if (!(strcmp(a,b)))
    {
        return 10;
    }
   // printf("Working");
    int i = 0,count = 0;
   // printf("lena: %d\nlen_b: %d\n\n",len_a,len_b);
    if (len_a > len_b)
    {
        //printf("1 w\n");
        return 0;
       
    }
    
    else if (len_a < len_b)
    {
         //printf("1 n");
        return 1;
    }
    //printf("a[i]: %c\n",a[i]);
    while (a[i])
    {
        //printf("a[i],b[i]: %c %c\n\n",a[i],b[i]);
        //printf("Creative_check: %d %d\n\n",a[i],b[i]);
        if ((a[i] == b[i]))
        {
            //printf("I am a culprit!!!\n");
            i++;
            continue;
        }
        else if (a[i] > b[i])
        {
            return 0;
        }
        else if (a[i] < b[i])
        {
            //printf("%d\n\n\n",i);
            //printf("why this? : %c %c\n",a[i],b[i]);
            //printf("I am returning...\n\n");
            return 1;
        }
        i++;
    }
    return 0;
}

void add_elements(char a[],char b[])
{
    strcpy(previous,b);
    int addition,j =0,rem = 0,k=0;
    char add[100];
    int len_bb = strlen(b) - 1,len_bbb = use;
    int i_found_error = len_bbb;
    //printf("1: lenb: %d\n\n",len_bb);
    //printf("2. lenbbb: %d\n\n",use);
    //printf("IN,B: %d %d\n\n",initial[len_bbb]-'0',b[len_bb] - '0');
    for (int i = len_bbb; i >= 0;i--)
    {
   addition = (initial[len_bbb] - '0') + (b[len_bb] - '0') + rem;
   //printf("initial,begin: %s,%s\n\n",initial,b);
    //printf("addition: %d\n",addition);
        if (get_addition_count(addition))
        {
            //printf("%d %d\n\n",len_bbb,strlen(b));
            if ((i == 0) && (i_found_error == strlen(b)-1))
            {
                add[j++] = (addition % 10) + '0';
                add[j++] = (addition / 10) + '0';
            }
            else
            {
                //printf("else loop executing...");
                //printf("loop add: %d\n\n",addition);
                add[j++] = (addition % 10) + '0';
                //printf("loop add: %c\n\n",add[j++]);
                rem = (addition / 10);
           }
        }
        else
        {
            //printf("iamworkaddition: %d\n\n",addition);
            //printf("Iamwork");
            add[j++] = (addition) + '0';
            rem = 0;
            //printf("i am work char: %c\n\n",add[j++]);
        }
        len_bbb--;
        len_bb--;
    }
    //printf("2. lenb:: %d\n\n",len_bb);
    while ((len_bb)!=-1)
        {
            addition = ((b[len_bb] - '0') + rem);
            //printf("Mistake suspected: %d\n\n",addition);
            if (get_addition_count(addition))
            {
                if (len_bb == 0)
                {
                    add[j++] = (addition % 10) + '0';
                    add[j++] = (addition / 10) + '0';
                }
                else
                {
                    add[j++] = (addition % 10) + '0';
                    rem = addition / 10;
                }
            }
            else
            {
                add[j++] = addition + '0';
                rem = 0;
            }
            len_bb--;
        }
    add[j] = 0;
    
    for (int i = j-1; i >= 0;i--)
    {
        b[k++] = add[i];
        //printf("%c",b[k++]);
    }
    b[k] = 0;
    //printf("value: %s\n\n",b);
}

int get_addition_count(int add)
{
    int count = 0;
    while (add)
    {
        count++;
        add /= 10;
    }
    
    if (count >= 2)
    {
        return 1;
    }
    return 0;
}

void call_func_subtract_2(char x[],char y[],char sub[],int len_x,int len_y)
{
    
    //printf("2: Working\n");
    int br = 1;
    int t_len_x = len_x-1;
    int t_len_y = len_y-1;
    int value=0;
    int subtract,i = 0;
    //printf("%d %d\n\n",len_x,len_y);
    for (i = 0;i < len_y;i++)
    {
        value = x[t_len_x] - '0';
        //printf("\n\n%c %c\n\n",x[t_len_x], y[t_len_y]);
        if (x[t_len_x] - '0' < y[t_len_y] - '0')
        {
            //printf("Yes executing: ");
            value = get_borrow_2(x,y,t_len_x,t_len_y);
            //printf("%d\n",value);
            //printf("%d: Changed value: %c\n",t_len_x-1,x[t_len_x-1]);
        }
        subtract = value - (y[t_len_y--] - '0');
        //printf("Subtract: %d\n\n",subtract);
        sub[i]=  subtract + 48;
        t_len_x--;
    }
    while (t_len_x != -1)
    {
        sub[i++] = x[t_len_x--];
    }
    
   // printf("%s\n",sub);
    sub[strlen(x)] = 0;
    printf("\nThe remainder is: ");
    if (negative == -1)
    {
        printf("-");
    }
    for (int i = strlen(x)-1;i>=0;i--)
    {
        if (!(sub[i] - '0') && br)
        {
            continue;
        }
        printf("%c",sub[i]);
        br = 0;
    }
    printf("\n\n");
}

int get_borrow_2(char x[],char y[],int len1,int len2)
{
    int zero = 0,t_len1 = len1-1,value;
    while (x[t_len1] == '0')
    {
        t_len1--;
        zero++;
        //printf("1 executing\n\n");
    }
    if (zero)
    {
        x[t_len1] = ((x[t_len1] - 48) - 1)+48;
        t_len1++;
        //printf("2 executing\n\n");
    }
   // printf("%d\n",zero);
    while ((t_len1 != len1) && (zero))
    {
        x[t_len1] = 57;
        t_len1++;
        //printf("3 executing\n\n");
        if (t_len1 == len1)
        {
           return (x[t_len1]-48)+10;
        }
    }
    
    x[len1-1] = ((x[len1-1] - 48) - 1)+48;
    value = (x[len1]-48)+10;
    return value;
}