#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int a[100],front = -1, rare = -1;
bool isempty()
{
    return front==-1? true : false;
}
bool isFull(){
	return rare>99? true: false; 
}
void enqueue()
{
    int x;
    printf("ENTER THE ELEMENT TO INSERT : ");
    scanf("%d",&x);
    if(isFull())
    {
        printf("ERROR.... QUEUE IS FULL\n");
        return ;
    }
    else if(isempty())
    {
        front = rare = 0;
    }
    else
    {
        rare++;
    }
    a[rare] = x;
}
void dequeue()
{
    if(isempty())
    {
        printf("ERROR... QUEUE IS EMPTY\n");
        return ;
    }
    else if(rare==front)
    {
        printf("%d DEQUEUED FROM THE LIST\n",a[front]);
        rare = -1;
        front = -1;
    }
    else
    {
        printf("%d DEQUEUED FROM THE LIST\n",a[front]);
        front++;
    }

}
void display()
{
    if(isempty())
    {
        printf("ERROR... LIST IS EMPTY\n");
    }
    else
    {
    	int i;
        printf("QUEUE IS : ");
        for(i = front; i<=rare; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("\nPRESS 1 TO ENQUEUE ELEMENT\n");
        printf("PRESS 2 TO DEQUEUE ELEMENT\n");
        printf("PRESS 3 TO DISPLAY ELEMENT\n");
        printf("PRESS 0 TO EXIT FROM THE LOOP\n");
        printf("\nENTER YOUR CHOICE : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: enqueue();break;
            case 2: dequeue();break;
            case 3: display();break;
            case 0: exit(0);
            default:
                printf("OOPS! INVALID CHOICE\n");
        }
    }
    return 0;
}
