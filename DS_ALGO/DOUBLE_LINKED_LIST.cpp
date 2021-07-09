#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
	struct node* prev;
};
struct node*head=NULL;
void insert()
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("ENER THE DATA : ");
	scanf("%d",&temp->data);
	temp->next = NULL;
	temp->prev = NULL;
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		struct node* temp1=head;
		while(temp1!=NULL)
		{
			temp->prev = temp1; 
			temp1=temp1->next;
		}
		temp1->next = temp;	
	}
	
}
void insert_beg()
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("ENER THE DATA : ");
	scanf("%d",&temp->data);
	temp->next = NULL;
	temp->prev = NULL;

}
int main()
{
	int ch;
	while(1)
	{
		printf("PRESS 1 TO INSERT ELEMENTS\n");
		printf("PRESS 2 TO INSERT FROM BEGINNING\n");
		printf("PRESS 3 TO DELETE ELEMENT\n");
		printf("PRESS 4 TO PRINT ELEMENTS\n");
		printf("PRESS 5 TO PRINT IN REVERSED ORDER\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert();break;
			case 2: insert_beg(); break;
			case 3: del();break;
			case 4: print();break;
			case 5: print_rev();break;
			default: printf("INVALID INPUT\n");
		}
	}
	return 0;
}
