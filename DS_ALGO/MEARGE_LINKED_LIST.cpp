#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node* head = NULL;
struct node* head1 = NULL;
void insert(int x,int val)
{
	if(val==1)
	{
		struct node* temp;									
		temp = (struct node*)malloc(sizeof(struct node));
		temp->data = x;
		temp->next = NULL;
		if(head == NULL)
		{
			head = temp;
		}
		else
		{
			struct node* p=head;
			while(p->next!=NULL)
			{
				p = p->next;
			}
			p->next = temp;
		}
	}
	else
	{
		struct node* temp;
		temp = (struct node*)malloc(sizeof(struct node));    
		temp->data = x;
		temp->next = NULL;
		if(head1 == NULL)
		{
			head1 = temp;
		}
		else
		{
			struct node* p = head1;
			while(p->next!=NULL)
			{
				p = p->next;
			}
			p->next = temp;
		}
	}
}
void print()
{
	int val = 0;
	printf("PRESS 1 TO ENTER ELEMENT IN 1ST LIST OTHERWISE PRESS 2 : ");
	scanf("%d",&val);
	if(val==1)
	{
		struct node* temp = head;
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp = temp->next;									//printing the elements of the first list
		}
		printf("\n\n");
	}
	else
	{
		struct node* temp = head1;
		while(temp!=NULL)										// printing the elements of the second list
		{
			printf("%d ",temp->data);
			temp = temp->next;
		}
		printf("\n\n");
	}
		
}
void merge()
{
	int n,x;
	if(head==NULL || head1==NULL)
	{
		if(head==NULL)
		{
			printf("PLEASE FILL THE 1ST LIST. AS IT IS EMPTY\n");
			printf("ENTER THE SIZE OF THE LIST #1: ");
			scanf("%d",&n);
			printf("ENTER %d ELEMENTS IN THE LIST #1: ",n);
			for(int i = 0; i<n; i++)
			{
				scanf("%d",&x);
				insert(x,1);
			}
		}
		else
		{
			printf("PLEASE FILL THE 2ND LIST. AS IT IS EMPTY\n");
			printf("ENTER THE SIZE OF THE LIST #2: ");
			scanf("%d",&n);
			printf("ENTER %d ELEMENTS IN THE LIST #2: ",n);
			for(int i = 0; i<n; i++)
			{
				scanf("%d",&x);
				insert(x,2);
			}
		}
	}
	struct node* temp = head,*temp1 = head1;
	if(temp->data<=temp1->data)
	{
		struct node *next=NULL;
		while(temp1!=NULL && temp->next!=NULL)
		{
			if(temp->data<=temp1->data && temp->next->data>=temp1->data)
			{
				next = temp1->next;
				temp1->next = temp->next;
				temp->next = temp1;
				temp1 = next;
			}
			temp = temp->next;
		}
		if(temp1!=NULL)
		{
			temp->next = temp1;
		}
		struct node* p = head;
		while(p!=NULL)
		{
			printf("%d ",p->data);
			p = p->next;
		}
		printf("\n\n");
	}
	else
	{
		struct node *next=NULL;
		while(temp!=NULL && temp1->next!=NULL)
		{
			if(temp1->data<=temp->data && temp1->next->data>=temp->data)
			{
				next = temp->next;
				temp->next = temp1->next;
				temp1->next = temp;
				temp = next;
			}
			temp1 = temp1->next;
		}
		if(temp!=NULL)
		{
			temp1->next = temp;
		}
		struct node* q = head1;
		while(q!=NULL)
		{
			printf("%d ",q->data);
			q = q->next;
		}
		printf("\n\n");
	}
}

int main()
{
	int choice;
	while(1)
	{
		int val = 0,x,n;
		printf("PRESS 1 TO ENTER THE ELEMENT IN THE LIST\n");
		printf("PRESS 2 TO DISPLAY THE LIST\n");
		printf("PRESS 3 TO MEARGE BOTH THE LIST\n");
		printf("PRESS 4 TO EXIT\n\n");
		printf("CHOOSE ANY OPTION : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: 
					if(head != NULL || head1!=NULL)
					{
						head = NULL; head1 = NULL;
					}
					printf("ENTER THE SIZE OF THE LIST #%d: ",1);
					scanf("%d",&n);
					printf("ENTER %d ELEMENTS IN LIST #%d : ",n,1);
					for(int i = 0; i<n; i++)
					{
						scanf("%d",&x);
						insert(x,1);
					}
					int m;
					printf("ENTER THE SIZE OF THE LIST #%d: ",2);
					scanf("%d",&m);
					printf("ENTER %d ELEMENTS IN LIST #%d : ",m,2);
					for(int i = 0; i<m; i++)
					{
						scanf("%d",&x);
						insert(x,2);
					}
					printf("\n");
					break;
			case 2: print();break;
			case 3: merge();break;
			case 4: exit(0);break;
			default: printf("WOOPS! WRONG CHOICE\n");
		}
	}
}
