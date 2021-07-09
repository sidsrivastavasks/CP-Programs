#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head;
void insert (int x)
{
	struct node* temp;
	temp = (node*)malloc(sizeof(struct node));
	temp->data = x;
	temp->next = head;
	head = temp;
}
void print()
{
	struct node* temp;
	printf("LIST IS : \n");
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
int main()
{
	head = NULL;
	printf("ENTER THE NUMBER OF ELEMENTS : \n");
	int n,i,x;
	scanf("%d",&n);
	for(i = 0; i<n; i++)
	{
		printf("ENTER THE ELEMENT : \n");
		scanf("%d",&x);
		insert(x);
		print();
	}
	return 0;
}
