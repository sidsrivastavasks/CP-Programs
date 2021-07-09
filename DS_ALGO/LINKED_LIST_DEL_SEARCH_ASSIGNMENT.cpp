#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct node{
    int data;
    struct node* next;
};
struct node* head = NULL;
void sort()
{
    struct node *nxt,*ptr;
    int t;

    if (head == NULL)
    {
        printf("LIST IS EMPTY\n");
    }
    else
    {
        for (ptr = head;ptr != NULL;ptr = ptr->next)
        {
            for (nxt = ptr->next;nxt != NULL;nxt = nxt->next)
            {
                if (ptr->data > nxt->data)
                {
                    t = ptr->data;
                    ptr->data = nxt->data;
                    nxt->data = t;
                }
            }
        }
	}
}
void insert(int x)
{
    struct node* temp,*p;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next=NULL;
    if(head==NULL)
    {
        head = temp;
    }
    else
    {
        p = head;
        while(p->next!=NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
}
int length(struct node* start, struct node* last)
{
    struct node* temp;
    temp = start;
    int c = 0;
    while(temp!=last)
    {
        temp = temp->next;
        c++;
    }
    return c;
}
struct node* middle(struct node* start, int l)
{
    struct node* temp,*mid;
      temp = start;
      while(l--)
      {
          temp = temp->next;
      }
      mid = temp;
      return mid;
}
void search()
{
    struct node* start,*last,*mid;
    start = head;
    last = NULL;
    int data;
    printf("ENTER THE DATA TO SEARCH\n");
    scanf("%d",&data);
    while(last!=start)
    {
        int l = length(start, last);
        mid = middle(start, ceil(l/2));
        if(mid->data==data)
        {
            printf("\nDATA FOUND : %d\n",mid->data);
           return ;
        }
        else if(mid->data>data)
        {
            last = mid;
        }
        else
        {
            start = mid->next;
        }
    }
   printf("\nDATA NOT FOUND\n");
   return;
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
    printf("\n\n");
}
void LinearSearch()
{
	struct node* temp = head;
	int x;
	printf("ENTER DATA TO SEARCH : ");
	scanf("%d",&x);
	int i = 1;
	while(temp!=NULL)
	{
		if(temp->data==x)
		{
			printf("DATA FOUND : %d AT POSITION : %d\n",temp->data,i);
			return;
		}
		temp = temp->next;
		i++;
	}
	printf("SORRY, DATA NOT FOUND\n");
	return ;
}
void del()
{
	struct node* temp;
	temp = head;int x;
	printf("ENTER THE DATA TO DELETE : ");
	scanf("%d",&x);
	if(head==NULL)
	{
		printf("\nLIST IS EMPTY\n");
	}
	else if(temp->data==x)
	{
		temp = temp->next;	
	}
	else
	{
		while(temp!=NULL && temp->next!=NULL)
		{
			if(temp->next->data==x)
			{
				temp->next = temp->next->next;
			}
			else
			{
				temp = temp->next;	
			}
		}
	}	
}
void delnext()
{
	struct node *itr=head,*n;
    int val;

    if (head==NULL)
    {
        printf("\nLIST IS EMPTY\n");
    }
    else
    {
        printf("\nENTER THE VALUE AFTER WHICH NODE IS TO BE DELETED : ");
        scanf("%d",&val);
        if ((head->data ==val)&&(head->next==NULL))
        {
            printf("\nTHERE IS NO VALUE AFTER SPECEFIC VALUE\n");
        }
        else
        {
            while (itr->next != NULL)
            {
                if (itr->data == val)
                {
                    n=itr->next;
                    itr->next=n->next;
                    free(n);
                    break;
                }
                itr=itr->next;
            }
            if (itr->next == NULL)
            {
                if (itr->data == val)
                {
                    printf("\nGiven value is at the end of the list\n");
                }
                else
                {
                    printf("\nGiven value is not in list\n");
                }
            }
            else
            {
                printf("\nNODE HAS BEEN DELETED\n");
            }
        }
    }
}
int main()
{
    int choice;
    while(1)
    {
    	int i,x,n;
        printf("\nPRESS 1 TO INSERT\n");
        printf("PRESS 2 FOR LINEAR SEARCH\n");
        printf("PRESS 3 FOR BINARY SEARCH\n");
        printf("PRESS 4 TO SORT\n");
        printf("PRESS 5 TO DISPLAY\n");
        printf("PRESS 6 TO DELETE A DATA\n");
        printf("PRESS 7 TO DELETE NEXT NODE OF THE DATA\n");
        printf("PRESS 0 TO EXIT\n");
        printf("CHOOSE ONE OF THE OPTION : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("ENTER THE SIZE OF THE LIST : ");
					scanf("%d",&n);
					printf("PLEASE ENTER %d ELEMENTS IN THE LIST : ",n);
					for(i = 0; i<n; i++)
					{
						scanf("%d",&x);
						insert(x);	
					}printf("\n\n");break;
					
			case 2: LinearSearch();break;	
            case 3: sort();search();break;
            case 4: sort();break;
            case 5: display();break;
            case 6: del();break;
            case 7: delnext();break;
            case 0:	exit(0);
            default:printf("Invalid\n");
        }
    }
    return 0;
}
