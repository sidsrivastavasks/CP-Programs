#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;

};

struct node* add(struct node *);
struct node* create(struct node *);
void display(struct node *);
struct node* reverse(struct node*);

int main ()
{   struct node *head=NULL;
    int choice,c;
    while (1)
    {
        printf ("\nPress 1 to Add Nodes in linked list");
        printf ("\nPress 2 to Display linked list");
        printf ("\nPress 3 to Reverse List");
        printf ("\nPress 0 to EXIT linked list");
        printf ("\nEnter your choice : ");
        scanf("%d",&choice);
        choice=(int)(choice);
    switch (choice)
    {
    case 1:
        head=create(head);
        break;
    case 2:
        display(head);
        break;
    case 3:
        head=reverse(head);
        break;
    case 0:
        exit(0);
    default:
        printf("\nWrong choice");
    }//end of switch
    }//end of while
    return 0;

}

//FUNCTIONS
struct node* add (struct node *head)
{
    struct node *temp,*itr=head;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&temp->data);
    temp->next = NULL;

    if (itr==NULL)
    {
        head=temp;
    }
    else
    {
        while (itr->next != NULL)
        {
            itr=itr->next;
        }
        itr->next=temp;
    }
    return head;
}
struct node* create(struct node *head)
{
    struct node *h=NULL;
    int i=0,n;
    printf("\nEnter Number of nodes to be added : ");
    scanf("%d",&n);
    printf("\n");
    for (i=0;i<n;i++)
    {
        h = add(h);
    }
    return h;
}

void display(struct node *head)
{   printf ("\n");
    struct node *t;
    t=head;
    if (head==NULL)
    {
        printf("\nTHERE IS NO LIST TO PRINT\n");
        return;
    }
    while (t!=NULL)
    {
        printf("%d->",t->data);
        t=t->next;
    }
    printf("\n");
}

struct node* reverse (struct node *head)
{
    struct node * present, *proceed, *connect;
    present=head;
    connect=NULL;
    proceed=present->next;
    while(present->next !=NULL)
    {
        present->next=connect;
        connect=present;
        present=proceed;
        proceed=present->next;
    }
    present->next=connect;
    head=present;
    return head;
}
