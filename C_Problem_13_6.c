#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int maths;
    int science;
    struct student *next;
};

void enqueue_element(int,int,int);
void call_first_enqueue(int,int,int);
void dequeue_element(void);
void display(void);
int first_creation = 1;

struct student *enqueue,*dequeue,*temp;

int main()
{
    int choice=0,element=0,maths=0,science=0;
    
    while (1)
    {
        
    printf("1.Enqueue\n2.Dequeue\n3.Display queue\n4.Exit\n\n");
    printf("Enter the choice: ");
    scanf("%d",&choice);
    printf("\n");
        switch (choice)
        {
            case 1:
                printf("Enter id, maths, science to enqueue: ");
                scanf("%d %d %d",&element,&maths,&science);
                printf("\n");
                if (first_creation == 1)
                {
                    call_first_enqueue(element,maths,science);
                    first_creation = 0;
                    printf("Elements enqueued successfully\n\n");
                }
                else
                {
                enqueue_element(element,maths,science);
                printf("Elements enqueued successfully\n\n");
                }
                break;
            case 2:
                dequeue_element();
                temp = enqueue;
                break;
            case 3:
                display();
                temp = enqueue;
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Entered value is wrong enter 1-4!!!\n\n");
        }
    }
}

void call_first_enqueue(int element,int maths,int science)
{
    enqueue = (struct student*)malloc(sizeof(struct student));
    enqueue->id = element;
    enqueue->maths = maths;
    enqueue->science = science;
    enqueue->next = NULL;
    temp = enqueue;
    dequeue = enqueue;
}

void enqueue_element(int element,int maths,int science)
{
    enqueue = (struct student*)malloc(sizeof(struct student));
    enqueue->id = element;
    enqueue->maths = maths;
    enqueue->science = science;
    enqueue->next = NULL;
    temp->next = enqueue;
    temp = enqueue;
}

void dequeue_element(void)
{
    if (dequeue != NULL)
    {
    temp = dequeue;
    printf("%d->%d->%d\n",temp->id,temp->maths,temp->science);
    dequeue = dequeue->next;
    free(temp);
    printf("Elements dequeued successfully\n\n");
    if (dequeue == NULL)
    {
         first_creation = 1;
    }
    }
    else
    {
        printf("No elements exist to dequeue\n\n");
        first_creation = 1;
    }
    temp = enqueue;
}

void display(void)
{
    temp = dequeue;
    if (temp != NULL)
    {
    printf("The elements are: \n\n");
    while (temp)
    {
        printf("%d %d %d\n\n",temp->id,temp->maths,temp->science);
        temp = temp->next;
    }
    }
    else
    {
        printf("There is no element to print\n\n");
    }
}