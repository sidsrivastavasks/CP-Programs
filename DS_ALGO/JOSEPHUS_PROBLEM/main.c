#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head = NULL;
void insert(int x)
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
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
void del(int data)
{
    struct node* trav = head,prev = NULL;
    if(head->data==data)
    {

    }
    else
    {

    }
}
void solve(int counter, int n)
{
    struct node* temp = head;
    int c = 0;
    while(n!=1)
    {
        if(c<counter)
        {
            c++;

        }
        if(c==counter)
        {
            c = 0;
            n--;
            del(temp->data);//delete that node
        }
    }
}
void display()
{
    struct node* temp = head;
    if(head == NULL)
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
int main()
{
    int n;
    printf("ENTER THE NUMBER OF FIGHTERS : ");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
    {
        insert(i);
        display();
    }
    printf("ENTER THE COUNTER : ");
    int counter;
    scanf("%d",&counter);
    solve(counter,n);
    return 0;
}
