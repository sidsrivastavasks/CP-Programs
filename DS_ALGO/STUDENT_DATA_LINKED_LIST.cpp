#include<stdio.h>
#include<stdlib.h>
struct node{
	int roll;
	char name[20];
	int marks;
	struct node* next;
};
struct node* head = NULL;
void display()
{
	struct node* temp;
	temp = head;
	printf("NAME OF STUDENTS WHO GOT ABOVE 90 MARKS ARE : \n");
	int i =1;
	while(temp!=NULL)
	{
		if(temp->marks>=90)
		{
			printf("%d- %s",i,temp->name);
			temp = temp->next;
		}
		printf("\n");
		i++;
	}
	printf("\n");
}
void create()
{
	struct node *temp,*temp1;
	temp = (struct node*)malloc(sizeof(struct node));
	
	printf("ENTER THE NAME OF THE STUDENT : ");
	scanf("%s",temp->name);
	printf("ENTER ROLL NUMBER OF THE STUDENT : ");
	scanf("%d",&temp->roll);
	printf("ENTER THE MARKS OF THE STUDENT : ");
	scanf("%d",&temp->marks);
	printf("\n");
	temp->next = NULL;
	if(head==NULL)
	{
		head = temp;
	}
	else
	{
		temp1 = head;
		while(temp1->next!=NULL)
		{
			temp1 = temp1->next;
		}
		temp1->next = temp;
	}
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
		printf("\n");
		switch(choice)
		{
			case 1:create();break;
			case 2:display();break;
			case 0:exit(0);
			default:printf("----INVALID INPUT----\n");
		}
	}
	return 0;
}
