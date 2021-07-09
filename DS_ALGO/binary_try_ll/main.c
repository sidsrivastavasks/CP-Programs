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
            printf("DATA FOUND : %d\n",mid->data);
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
   printf("DATA NOT FOUND\n");
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
    printf("\n");
}
int main()
{
    int choice;
    while(1)
    {
    	int i,x,n;
        printf("\nPRESS 1 TO INSERT\n");
        printf("PRESS 2 TO SEARCH\n");
        printf("PRESS 3 TO SORT\n");
        printf("PRESS 4 TO DISPLAY\n");
        printf("PRESS 5 TO EXIT\n");
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
					} printf("\n");break;
            case 2: sort();search(); break;
            case 3: sort();break;
            case 4: display(); break;
            case 5:	exit(0);break;
            default: printf("Invalid\n");
        }
    }
    return 0;
}
