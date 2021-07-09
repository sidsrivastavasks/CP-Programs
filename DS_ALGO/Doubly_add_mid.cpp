#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next,*prev;
};
struct node* head = NULL;
int length = 0;
void addmid(){
	
	struct node *current = head, *temp = NULL;  
	struct node* midNode = (struct node*)malloc(sizeof(struct node));
	printf("ENTER THE DATA : ");
	scanf("%d",&midNode->data);
	midNode->next = NULL;
	midNode->prev = NULL;
	
	int mid = length%2==0? length/2 : (length+1)/2;
	int count = 1;
	while(count<mid){
		current = current->next;
		count++;
	}
	
	temp = current->next;
	current->next = midNode;
	midNode->prev = current;
	midNode->next = temp;
	temp->prev = midNode;
}
void create()
{
	length++;
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
int main()
{
	int ch;
	while(1)
	{
		printf("\n==================================\n");
		printf("PRESS 1 TO CREATE LIST\n");
		printf("PRESS 2 TO DISPLAY LIST\n");
		printf("PRESS 3 TO ADD IN MIDDLE\n");
		printf("PRESS 0 TO EXIT\n");
		printf("==================================\n\n");
		printf("ENTER YOUR CHOICE : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: create();break;
			case 2: display();break;
			case 3: if(length>=2)
						addmid();
					else
						printf("At least 2 data is required in the list\n");
					break;
			case 0: exit(0);
			default:
				printf("OOPS! INVALID INPUT\n");
		}
	}
	return 0;
}
