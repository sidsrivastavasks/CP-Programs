#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head = NULL;
void Insert(int x)
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("ENTER THE DATA : ");
	scanf("%d",&temp->data);
	temp->next = NULL;
	if(x==1)
	{
		if(head==NULL)
		{
			head = temp;
			temp->next = head;
		}
		else
		{
			struct node* trav = head;
			while(trav->next!=head)
			{
				trav = trav->next;
			}
			temp->next = head;
			head = temp;
			trav->next = head;
		}
	}
	else if(x==2)
	{
		if(head==NULL)
		{
			head = temp;
			temp->next = head;
		}
		else
		{
			struct node* trav = head;
			while(trav->next!=head)
			{
				trav = trav->next;
			}
			trav->next = temp;
			temp->next = head;
		}
	}
	else
	{
		int pos;
		printf("ENTER THE POSITION : ");
		scanf("%d",&pos);
		if(head==NULL)
		{
			if(pos==1)
			{
				head = temp;
				temp->next = head;
			}
			else
			{
				printf("OOPS! LOOKS LIKE THE LIST IS EMPTY....\n");
				
			}
		}
		else
		{
			pos-=2;
			struct node* trav = head;
			while(pos--)
			{
				trav = trav->next;
			}
			temp->next = trav->next;
			trav->next = temp; 
		}
	}
}
void display()
{
	struct node* temp = head;
	if(head==NULL)
	{
		printf("EMPTY LIST\n");
	}
	else
	{
		while(temp->next!=head)
		{
			printf("%d->",temp->data);
			temp = temp->next;
		}
		printf("%d ",temp->data);
	}
}
void del(int x)
{
	struct node* ch = head;
	if(x == 1)
	{
		if(head==NULL)
		{
			printf("OOPS, LIST IS EMPTY");
		}
		else if(ch->next == head)
		{
			head = NULL;
			free(ch);
		}
		else
		{
			struct node* temp,*trav = head;
			temp = head;
			while(trav->next!=head)
			{
				trav = trav->next;
			}
			head = temp->next;
			trav->next = head;
			free(temp);
		}
	}
	else if(x==2)
	{
		if(head==NULL)
		{
			printf("OOPS, LIST IS EMPTY");
		}
		else if(ch->next == head)
		{
			//struct node* temp = head;
			head = NULL;
			free(ch);
		}
		else
		{
			struct node* trav = head,*temp = NULL;
			while(trav->next!=head)
			{
				temp = trav;
				trav = trav->next;
			}
			temp->next = head;
			free(trav);
		}
	}
	else
	{
		
	}
}
int main()
{
	int choice;
	while(1)
	{
		printf("\n==================================\n");
		printf("PRESS 1 TO INSERT\n");
		printf("PRESS 2 TO DISPLAY\n");
		printf("PRESS 3 DELETE\n");
		printf("PRESS 0 TO EXIT\n");
		printf("==================================\n\n");
		printf("ENTER YOUR CHOICE : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	int ch;
					printf("\n	--------------------------------------------\n");
					printf("		PRESS 1 TO ADD FROM START\n");
					printf("		PRESS 2 TO ADD FROM END\n");
					printf("		PRESS 3 TO ADD AT NTH POSITION\n");
					printf("	--------------------------------------------\n\n");
					printf("SELECT ONE AMONG THEM : ");
					scanf("%d",&ch);
					switch(ch)
					{
						case 1:Insert(1);break;
						case 2:Insert(2);break;
						case 3:Insert(3);break;
					}break;
			case 2:display();break;
			case 3:	ch;
					printf("\n	--------------------------------------------\n");
					printf("		PRESS 1 TO DELETE FROM START\n");
					printf("		PRESS 2 TO DELETE FROM END\n");
					printf("		PRESS 3 TO DELETE FROM NTH POSITION \n");
					printf("	--------------------------------------------\n\n");
					printf("SELECT ONE AMONG THEM : ");
					scanf("%d",&ch);
					switch(ch)
					{
						case 1:del(1);break;
						case 2:del(2);break;
						case 3:del(3);break;
					}break;
			case 0:exit(0);
			default:printf("INVALID INPUT\n");
		}
	}
	return 0;
}	
