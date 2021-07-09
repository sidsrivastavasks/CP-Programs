#include<stdio.h>
#include<stdlib.h>
#define size 5
int push(int [],int );
int pop(int [],int );
void display(int [],int );
int main()
{
	int choice,stack[size],top=-1;
	while(1)
	{
		printf("PRESS 1 TO PUSH ELEMENT\n");
		printf("PRESS 2 TO POP ELEMENT\n");
		printf("PRESS 3 TO DISPLAY ELEMENTS\n");
		printf("PRESS 4 TO EXIT\n");
		printf("ENTER YOUR CHOICE : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : top = push(stack,top);break;
			case 2 : top = pop(stack,top);break;
			case 3 : display(stack,top);break;
			case 4 : exit(0);
			default: printf("Oops!! INVALID CHOICE...\n");
		}
	}
}
int push(int stack[],int top)
{
	int val;
	if(top==size-1)
	{
		printf("SORRY! STACK OVERFLOW..\n");
	}
	else
	{
		printf("ENTER THE DATA : ");
		scanf("%d",&val);
		top++;
		stack[top] = val;
	}
	return top;
}
int pop(int stack[], int top)
{
	if(top==-1)
	{
		printf("WOops! STACK UNDERFLOW...\n");
	}
	else
	{
		printf("%d IS BEING DELETED\n",stack[top]);
		top--;
	}
	return top;
}
void display(int stack[],int top)
{
	int i;
	for(i = 0; i<=top; i++)
	{
		printf("%d ",stack[i]);
	}
	printf("\n");
}
