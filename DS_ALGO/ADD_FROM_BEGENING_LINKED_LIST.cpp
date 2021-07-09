#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head = NULL;
void insert()
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("ENTER THE NUMBER : \n");
	scanf("%d",&temp->data);
	temp->next = head;
	head = temp;
}
void display()
{
	struct node* temp;
	temp = head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
int main()
{
	int c;
	while(1)
	{
		printf("PRESS 1 TO ADD ELEMENT IN THE LINKED LIST\n");
		printf("PRESS 2 TO DISPLAY THE ELEMENTS IN THE LIST\n");
		printf("PRESS 0 TO END THE PROCESS\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:insert();break;
			case 2:display();break;
			case 0:exit(0);
		}
	}
	return 0;
}
