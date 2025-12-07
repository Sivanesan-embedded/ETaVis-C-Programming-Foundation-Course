#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int maths;
    int science;
    struct student *next;
};

void push(int,int,int);
void create_node1(int,int,int);
void pop_element(void);
void display_element(void);
struct student *current;
struct student *temp;

int main()
{
    int choice = 0,push_element = 0,first_time_creation = 1,id1,maths1,science1;
   
   while (1)
   {
    printf("1.PUSH\n");
    printf("2.POP\n");
    printf("3.DISPLAY STACK\n");
    printf("4.EXIT\n");
    printf("Enter a choice: ");
    scanf("%d",&choice);
    printf("\n\n");
    
    switch (choice)
    {
        case 1:
            printf("Enter element to Push in a stack: ");
            scanf("%d %d %d",&push_element,&maths1,&science1);
            printf("\n\n");
            if (first_time_creation)
            {
                create_node1(push_element,maths1,science1);
                first_time_creation = 0;
                printf("Element pushed successfully\n\n");
            }
            else
            {
            push(push_element,maths1,science1);
            printf("Element pushed successfully\n\n");
            }
            break;
        case 2:
            pop_element();
            break;
        case 3:
            display_element();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Entered value is wrong enter 1-4!!!\n\n");
        }
    }
}

void push(int element,int maths,int science)
{
    current = (struct student*)malloc(sizeof(struct student));
    current->id = element;
    current->maths = maths;
    current->science = science;
    current->next = temp;
    temp = current;
}

void create_node1(int element,int maths,int science)
{
    temp = (struct student*)malloc(sizeof(struct student));
    temp->id = element;
    temp->maths = maths;
    temp->science = science;
    temp->next = NULL;
}

void pop_element(void)
{
    if (temp != NULL)
    {
        printf("PoP element: %d %d %d\n\n",temp->id,temp->maths,temp->science);
        temp = temp->next;
        free(current);
        current = temp;
        printf("Element poped successfully\n\n");
    }
    else
    {
        printf("There is no value to pop\n\n");
    }
}

void display_element(void)
{
    printf("The elements are: \n\n");
    if (temp != NULL)
    {
    while (temp)
    {
        printf("%d %d %d\n\n",temp->id,temp->maths,temp->science);
        temp = temp->next;
    }
    temp = current;
    }
    else
    {
        printf("There is no value to get printed\n\n");
    }
}