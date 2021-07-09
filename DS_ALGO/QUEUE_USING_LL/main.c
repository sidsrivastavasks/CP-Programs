#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* front = NULL;
struct node* rear = NULL;
int counter = 0;
void Enqueue()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));

    printf("ENTER THE DATA TO ENQUEUE : ");
    scanf("%d",&temp->data);

    temp->next = NULL;
    if(counter>100){
        printf("Queue is full, please Dequeue first\n");
    }
    else if(rear==NULL)
    {
       front = temp;
       rear = temp;
       return ;
    }
    rear->next = temp;
    rear = temp;
    counter++;
}
void dequeue()
{
    struct node* temp = NULL;
    if(front==NULL)
    {
        printf("NOTHING TO DEQUEUE... LIST IS EMPTY\n");
        counter = 0;
        return ;
    }
    else
    {
        temp = front;
        front = front->next;
        free(temp);
    }
    counter--;
}
void display()
{
    if(front==NULL)
    {
        printf("OOPS! LIST IS EMPTY\n");
        return ;
    }
    else
    {
        struct node* temp = front;
        printf("\n==========================\n");
        printf("QUEUE IS : ");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("\n==========================\n");
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("\n===========================\n");
        printf("PRESS 1 TO ENQUEUE        =\n");
        printf("PRESS 2 TO DEQUEUE        =\n");
        printf("PRESS 3 TO DISPLAY        =\n");
        printf("PRESS 0 TO EXIT           =\n");
        printf("===========================\n");
        printf("\nENTER YOUR CHOICE : ");
        scanf("%d",&ch);
        printf("=========================\n\n");
        switch(ch)
        {
            case 1: Enqueue();break;
            case 2: dequeue();break;
            case 3: display();break;
            case 0: exit(0);
            default:
                printf("OOPS! INVALID INPUT...\n");
        }
    }
    return 0;
}
