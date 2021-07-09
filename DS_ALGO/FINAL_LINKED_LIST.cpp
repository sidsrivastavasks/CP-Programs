#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL,*last = NULL;
void create();
void display();
void reverse(struct node*);
void update();
void sort();
int length();
void insert_at_any();
int main()
{
    int choice,c;
    while(1)
    {
        printf("\nPRESS 1 TO CREATE LINKED LIST");
        printf("\nPRESS 2 TO DISPLAY LINKED LIST");
        printf("\nPRESS 3 TO SORT THE ELEMENTS IN THE LIST");
        printf("\nPRESS 4 TO UPDATE THE VALUES IN THE LIST");
        printf("\nPRESS 5 TO PRINT LIST IN REVERSE");
        printf("\nPRESS 6 TO INSERT AT ANY POSITION");
        printf("\nPRESS 0 TO EXIT FROM LINKED LIST\n");
        printf("ENTER YOUR CHOICE : ");
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
                sort();
                break;
            case 4:
                update();
                break;
            case 5:
                reverse(head);
                break; 
			case 6:
				insert_at_any();
				break;	       
            case 0:
                exit(0);
            default:
            printf("INVALID INPUT\n");          
        }
    }
    return 0;
}
void create()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\nENTER THE DATA : ");
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
        printf("%d ",t->data);
        t = t->next;
    }
    printf("\n");
}
void reverse(struct node *temp)
{
    if(temp->next==NULL)
    {
        printf("%d ",temp->data);
        return ;
    }
    reverse(temp->next);
    printf("%d ",temp->data);
}
void update()
{
    struct node *temp;
    temp = head;
    int old,n;
    printf("ENTER THE DATA TO UPDATE IN THE LIST : ");
    scanf("%d",&old);
    printf("ENTER THE VALUE TO REPLACE WITH : ");
    scanf("%d",&n);
    while(temp!=NULL)
    {
        if(temp->data==old)
        {
            temp->data = n;
            break;
        }
        else
        {
            temp = temp->next;
        }
    }
}
void sort()
{
    struct node *nxt,*i;
    int temp;
    
    if (head == NULL)
    {
        printf("LIST IS EMPTY\n");
    }
    else
    {
        for (i = head; i!= NULL; i = i->next)
        {
            for (nxt = i->next; nxt != NULL; nxt = nxt->next)
            {
                if (i->data > nxt->data)
                {    
                    temp = i->data;
                    i->data = nxt->data;
                    nxt->data = temp;
                }
            }
        }
    }
}
int length()
{
    int i=0;
    struct node *itr=head;
    while (itr != NULL)
    {
        i++;
        itr=itr->next;
    }
    return i;
}
void insert_at_any()
{
	struct node* p,*q=head;
	int c=1,l,pos,yes;
	l = length();
	p = (struct node*)malloc(sizeof(struct node));
	printf("ENTER THE DATA TO INSERT : ");
	scanf("%d",&p->data);
	p->next = NULL;
	printf("ENTER THE POSITION : ");
	scanf("%d",&pos);
	if (pos>l+1)
	{
        printf("LIST POSITION IS INVALID\n");
		printf("DO YOU WANT ME TO ADD IT AT THE LAST?\n PRESS 1 TO FOR YES\n PRESS 2 TO EXIT\n");
		scanf("%d",&yes);
		if(yes==1)
		{
			if(head==NULL)
			{
				printf("THE LIST IS EMPTY AND THE NEW NODE IS BEING ADDED AT THE FIRST POSITION \n");
				head = p;
			}
			else
			{
				while(q->next!=NULL)
				{
					q = q->next;
				}
				q->next = p;
			}
			
		}	
		else
		{
			return;
		}
	}
	else
	{
		if(pos==1)
		{
			p->next = head;
			head = p;
		}
		else
		{
			while (c<pos-1)
            {
                c++;
                q=q->next;
            }
            if (q->next==NULL)
                {q->next=p;}
            else
            {
                p->next=q->next;
                q->next=p;
            }
		}
	}
}
