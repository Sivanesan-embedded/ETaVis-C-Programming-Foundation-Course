#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int maths;
    int science;
    struct student *next;
};

void create_node(int);
void print_nodes();
void insert_node();

struct student *current,*head,*temp;

int main()
{
    int id = 1,choice=0;
    head = (struct student*)malloc(sizeof(struct student));
    printf("Enter the id: ");
    scanf("%d",&(head->id));
    if (head->id != -1)
    {
        printf("Enter the maths marks: ");
        scanf("%d",&(head->maths));
        printf("Enter the science marks: ");
        scanf("%d",&(head->science));
        head->next = NULL;
        temp = head;
    }
    for (int i = 1;i<=4;i++)
    {
        printf("Enter the id: ");
        scanf("%d",&id);
        create_node(id);
    }
    while (1)
    {
    printf("1.Insert\n2.Display\n3.Exit\n");
    printf("Enter the choice: ");
    scanf("%d",&choice);
    
    switch (choice)
    {
        case 1:
            insert_node();
        break;
        case 2:
            print_nodes();
            break;
        case 3:
            exit(0);
    }
    
    }
}

void create_node(int id)
{
    current = (struct student*)malloc(sizeof(struct student));
    current->id = id;
    printf("Enter the maths marks: ");
    scanf("%d",&(current->maths));
    printf("Enter the science marks: ");
    scanf("%d",&(current->science));
   temp->next = current;
   current->next = NULL;
   temp = current;
}

void print_nodes()
{
    temp = head;
    while (temp)
    {
        printf("\n%d %d %d\n\n",temp->id,temp->maths,temp->science);
        temp = temp->next;
    }
}

void insert_node()
{
    temp = head;
    int id;
    printf("Enter the id to insert after the element: ");
    scanf("%d",&id);
    
    while (temp)
    {
        if (temp->id == id)
        {
            break;
        }
        temp = temp->next;
        if (temp == 0)
        {
            printf("Element: not found");
            break;
        }
    }
    
    current = (struct student*)malloc(sizeof(struct student));
    
    printf("Enter the id: ");
    scanf("%d",&(current->id));
    printf("Enter the maths marks: ");
    scanf("%d",&(current->maths));
    printf("Enter the science marks: ");
    scanf("%d",&(current->science));
    
    current->next = temp->next;
    temp->next = current;
}