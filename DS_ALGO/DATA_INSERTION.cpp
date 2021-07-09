#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head=NULL,*last = NULL;
void create();
void display();
void add();
int main()
{
	int choice,c;
	while(1)
	{
		printf("PRESS 1 TO CREATE LINKED LIST\n");
		printf("PRESS 2 TO DISPLAY LINKED LIST\n");
		printf("PRESS 3 TO ADD DATA AFTER A NODE\n");
		printf("PRESS 6 TO EXIT FROM LINKED LIST\n");
		printf("ENTER YOUR CHOICE\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: 
			  create();
			  break;
			case 2:
				display();
				break;
			case 3:
				add();
				break;	
			case 6:
				exit(0);
			default:
			printf("WRONG CHOICE\n");		  
		}
	}
	return 0;
}
void create()
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("ENTER THE DATA :\n");
	scanf("%d",&temp->data);
	temp->next = NULL;
	if(head==NULL)
	{
		head = temp;
		last = temp;
	}
	else
	{
		last->next=temp;
		last = temp;
	}
}
void display()
{
	struct node*t;
	t = head;
	while(t!=NULL)
	{
		printf("%d->",t->data);
		t = t->next;
	}
	printf("\n");
}
void add()
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("ENTER THE DATA : \n");
	scanf("%d",&temp->data);
	printf("ENTER THE DATA BEFORE WHICH THE NODE IS TO BE INSERTED : \n");
	int n,i;
	scanf("%d",&n);
	temp->next = NULL;
	struct node* temp1=head;
	struct node* prev = head;
	if(temp1->data==n)
	{
		temp->next = head;
		head = temp;
	}
	else
	{
		while(temp1->data!=n)
		{
			prev = temp1;
			temp1 = temp1->next;
		}
		temp->next = prev->next;
		prev->next = temp;
	}
}

