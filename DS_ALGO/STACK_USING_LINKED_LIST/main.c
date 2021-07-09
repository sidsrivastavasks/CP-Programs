#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* top = NULL;
void push()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("ENTER THE DATA : ");
    scanf("%d",&temp->data);
    temp->next = top;
    top = temp;
}
void pop()
{
    struct node* temp;
    if(top==NULL)
    {
        printf("STACK UNDERFLOW\n");
    }
    else
    {
        printf("%d DELETED FROM THE LIST... \n",top->data);
        temp = top;
        top = top->next;
        free(temp);
    }
}
void display()
{
    struct node* temp;
    temp = top;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    int choice;
    while(1)
    {
        printf("\n============================================\n");
        printf("PRESS 1 TO PUSH ELEMENTS\n");
        printf("PRESS 2 TO POP THE ELEMENT\n");
        printf("PRESS 3 TO DISPLAY DATA IN THE ELEMENT\n");
        printf("PRESS 4 TO EXIT\n");
        printf("============================================\n\n");
        printf("CHOOSE AN OPTION : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push();break;
            case 2: pop();break;
            case 3: display();break;
            case 4: exit(0);
            default:printf("SORRY!! INVALID INPUT...\n");
        }
    }
    return 0;
}
