#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next,*prev;
};
struct node* head = NULL;
void create()
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	printf("ENTER THE DATA : ");
	scanf("%d",&temp->data);
	temp->next = NULL;
	temp->prev = NULL;
	if(head == NULL)
	{
		head = temp;
		return;
	}
	else
	{
		struct node* travel = head;
		while(travel->next!=NULL)
		{
			travel = travel->next;
		}
		travel->next = temp;
		temp->prev = travel;
	}
}
void display()
{
	struct node* temp = head;
	printf("\n--------------------------\n");
	printf("LIST IS : ");
	while(temp->next!=NULL)
	{
		printf("%d->",temp->data);
		temp = temp->next;
	}
	printf("%d",temp->data);
	printf("\n--------------------------\n");
}
void revprint()
{
	struct node* temp= head;
	if(temp==NULL)
	{
		printf("LIST IS EMPTY\n");
		return;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		printf("\n--------------------------\n");
		printf("REVERSED LIST IS : ");
		while(temp->prev!=NULL)
		{
			printf("%d->",temp->data);
			temp = temp->prev;
		}
		printf("%d",temp->data);
		printf("\n--------------------------\n");
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n==================================\n");
		printf("PRESS 1 TO CREATE LIST\n");
		printf("PRESS 2 TO DISPLAY LIST\n");
		printf("PRESS 3 TO PRINT IN REVERSE\n");
		printf("PRESS 0 TO EXIT\n");
		printf("==================================\n\n");
		printf("ENTER YOUR CHOICE : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: create();break;
			case 2: display();break;
			case 3: revprint();break;
			case 0: exit(0);
			default:
				printf("OOPS! INVALID INPUT\n");
		}
	}
	return 0;
}
