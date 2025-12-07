#include <stdio.h>
#include <stdlib.h>

struct student {
    struct student *prev;
    int id;
    int maths;
    int science;
    struct student *next;
};

void add_element(int,int,int);
void display_start_to_end(void);
void display_end_to_start(void);
void insert_node(int,int,int,int);
void delete_node(int);

struct student *head,*temp,*current;

int main()
{
    int maths_1=0,id_1=0,science_1 = 0,find=0;
    
    head = (struct student*)malloc(sizeof(struct student));
    
    printf("Enter id, Enter Maths mark, Enter Science mark: ");
    scanf("%d %d %d",&id_1,&maths_1,&science_1);
    head->id = id_1;
    head->maths = maths_1;
    head->science = science_1;
    head->prev = NULL;
    head->next = NULL;
    temp = head;
    
    for (int i = 0;i < 4;i++)
    {
        printf("Enter id, Enter Maths mark, Enter Science mark: ");
        scanf("%d %d %d",&id_1,&maths_1,&science_1);
        add_element(id_1,maths_1,science_1);
    }
    printf("\n5 elements added successfully\n\n");
    
    printf("Enter element to insert after: ");
    scanf("%d",&find);
    printf("\n");
     printf("Enter id, Enter Maths mark, Enter Science mark: ");
    scanf("%d %d %d",&id_1,&maths_1,&science_1);
    insert_node(id_1,maths_1,science_1,find);
    display_start_to_end();
    display_end_to_start();
    printf("Enter ID to delete element: ");
    scanf("%d",&find);
    delete_node(find);
    display_start_to_end();
    display_end_to_start();
    
    exit(0);
}

void add_element(int id,int maths,int science)
{
    current = (struct student*)malloc(sizeof(struct student));
    current->id = id;
    current->maths = maths;
    current->science = science;
    current->prev = temp;
    temp->next = current;
    current->next = NULL;
    temp = current;
}

void display_start_to_end(void)
{
    printf("The elements are from start to end: \n\n");
    temp = head;
    while (temp)
    {
        printf("%d %d %d\n",temp->id,temp->maths,temp->science);
        temp = temp->next;
    }
    temp = current;
    printf("\n");
}

void insert_node(int id,int maths,int science,int find)
{
    int found = 1;
    temp = head;
    struct student *newnode = (struct student*)malloc(sizeof(struct student));
    while (temp)
    {
        if (temp->id == find)
        {
             printf("ID found\n");
             found = 0;
             break;
        }
        temp = temp->next;
    }
    if (found)
    {
        printf("Element not found\n\n");
    }
    else
    {
    newnode->id = id;
    newnode->maths = maths;
    newnode->science = science;
    temp->next->prev = newnode;
    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next = newnode;
    
    temp = current;
    }
}

void delete_node(int find)
{
    int found = 1;
    temp = head;
    while (temp)
    {
        if (temp->id == find)
        {
            printf("ID found\n");
            found = 0;
            break;
        }
        temp = temp->next;
    }
    if (found)
    {
        printf("ID does not present\n\n");
    }
    else
    {
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
    temp = current;
    }
}

void display_end_to_start(void)
{
    printf("The elements are from end to start: \n\n");
    temp = current;
    while(temp)
    {
        printf("%d %d %d\n",temp->id,temp->maths,temp->science);
        temp = temp->prev;
    }
    temp = current;
    printf("\n");
}