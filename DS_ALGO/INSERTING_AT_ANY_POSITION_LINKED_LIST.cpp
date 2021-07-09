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
	printf("ENTER THE DATA : \n");
	scanf("%d",&temp->data);
	printf("ENTER THE POSITION AT WHICH THE DATA IS TO BE INSERTED : \n");
	int n,i;
	scanf("%d",&n);
	temp->next = NULL;
	if(n==1)
	{
		temp->next = head;
		head = temp;
	}
	else
	{
		struct node* temp1=head;
		for(i = 0; i<n-2; i++)
		{
			temp1 = temp1->next;
		}
		temp->next = temp1->next;
		temp1->next = temp;
	}
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
		printf("PRESS 1 TO ADD ELEMENTS IN THE LINKED LIST\n");
		printf("PRESS 2 TO DISPLAY ELEMENTS IN THE LINKED LIST\n");
		printf("PRESS 0 TO EXIT THE PROCESS\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:insert(); break;
			case 2:display();break;
			case 0:exit(0);break;
		}
	}
	return 0;
}
