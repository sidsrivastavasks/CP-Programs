#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head = NULL, *last = NULL;
void foo(struct node* head){
	if(head==NULL){
		return ;
	}
	printf("%d",head->data);
	if(head->next!=NULL)
		foo(head->next->next);
	printf("%d",head->data);
}
void display(struct node* temp)
{
	//struct node* temp;
	//temp = head;
	//while(temp!=NULL)
	if(temp!=NULL)
	{
		display(temp->next);
		printf("%d-> ",temp->data);
	}
	
}
void create(int x)
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
//	printf("ENTER : ");
//	scanf("%d",&temp->data);
temp->data = x;
	printf("OK");
	temp->next = NULL;
	if(head==NULL)
	{
		head = temp;
		last = temp;
	}
	else
	{
		last->next = temp;
		last = temp;
	}
}
void print(struct node* head){
	
}
int main()
{
	int choice;
	while(1)
	{
		printf("\n----PRESS 1 TO ADD ELEMENT----\n");
		printf("----PRESS 2 TO DISPLAY ELEMENT----\n");
		printf("----PRESS 0 TO EXIT----\n");
		printf("ENTER THE CHOICE : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:for(int i = 1; i<=19; i++)
			{create(i);}break;
			case 2:foo(head);break;
			case 0:exit(0);
			default:printf("----INVALID INPUT----\n");
		}
	}
	return 0;
}
