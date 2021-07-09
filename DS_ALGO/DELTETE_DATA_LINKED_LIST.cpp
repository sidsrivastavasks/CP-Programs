#include<stdio.h>
#include<stdlib.h>
struct ListNode
{
	int val;
	struct ListNode* next;
};
struct ListNode* head = NULL;
void insert(int x)
{
	struct ListNode* temp;
	temp=(struct ListNode*)malloc(sizeof(struct ListNode));
	temp->val = x;
	temp->next = NULL;
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		struct ListNode* p = head;
		while(p->next!=NULL)
		{
			p= p->next;
		}
		p->next = temp;
	}
}
void del()
{
	int val;
	struct ListNode* temp = head;
	printf("ENTER THE VALUE TO DELETE: ");
	scanf("%d",&val);
	if(temp->val==val)
	{
		head = temp->next;
	}
	else
	{
		struct ListNode* prev = NULL;
		while(temp!=NULL && temp->next!=NULL)
		{
			if(temp->next->val==val)
			{
				temp->next = temp->next->next;
			}
			else
			{
				temp = temp->next;	
			}
		}
	}
	struct ListNode* p = head;
	while(p!=NULL)
	{
		printf("%d ",p->val);
		p = p->next;
	}
	
}
int main()
{
	int n,x,i;
	printf("ENTER THE SIZE OF THE LIST : ");
	scanf("%d",&n);
	for(i = 0; i<n; i++)
	{
		scanf("%d",&x);
		insert(x);
	}
	del();
	return 0;
}
