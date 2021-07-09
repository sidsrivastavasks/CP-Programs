#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
void display(struct node* );
struct node* insert(int x,struct node* head)
{
	struct node* temp;
	temp = (struct node* )malloc(sizeof(struct node));
	temp->data = x;
	temp->next = NULL;
	if(head==NULL)
	{
		head = temp;
		//display(head);
		
	}
	else
	{
		struct node* p = head;
		while(p->next!=NULL)
		{
			p = p->next;
		}
		p->next = temp;
	//	display(head);
	}
	return head;
}
void display(struct node* head)
{
	struct node* temp = head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
struct node* rev(struct node* head)
{
	struct node *prev,*next,*current;
	current = head;
	prev = NULL;
	while(current!=NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
	return head;
}
struct node* newnode(int x)
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->next = NULL;
	temp->data = x;
	return temp;
}
struct node* check(struct node* head)
{
	struct node* temp = head;
	if(head == NULL)
	{
		printf("LIST IS EMPTY\n");
	}
	else
	{
		struct node* next = head;int x;
		int flag = 0;
		while(temp!=NULL)
		{
			if((temp->data)%5==0)
			{
				printf("DATA FOUND! PLEASE INSERT NEW NODE : ");
				scanf("%d",&x);
				struct node* temp1 = newnode(x);	
				temp1->next = temp->next;
				temp->next = temp1;	
				flag = 1;
				temp = temp->next;		
			}
			temp = temp->next;
		}	
		if(flag!=1)
		{
			printf("OOPS, THERE ARE NO NUMBERS WHICH ARE DIVISIBLE BY 5\n");
		}
	}
	return head;
}
int main()
{
	struct node* head = NULL;
	int choice,i,n,x;
	while(1)
	{
		printf("\nPRESS 1 TO INSERT IN THE LIST\n");
		printf("PRESS 2 TO REVERSE\n");
		printf("PRESS 3 TO CHECK AND ADD NEW NODE\n");
		printf("PRESS 4 TO DISPLAY ELEMENTS\n");
		printf("PRESS 0 TO EXIT\n");
		printf("ENTER YOUR CHOICE: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("ENTER THE SIZE OF THE LIST : ");
					scanf("%d",&n);
					printf("PLEASE ENTER %d ELEMENTS OF THE LIST : ",n);
					for(i = 0; i<n; i++){
						scanf("%d",&x);
						head = insert(x,head);
					}
					printf("\n");
					break;
			case 2: head = rev(head);break;
			case 3: head = check(head);break;
			case 4: display(head);break;
			case 0: exit(0);
			default : printf("OOPS, INVALID INPUT\n");
		}
	}
}
