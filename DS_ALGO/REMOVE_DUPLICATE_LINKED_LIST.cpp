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
void duplicate()
{
	struct ListNode* temp,*prev,*next;
	temp = head;prev = NULL;
	while(temp->next!=NULL)
	{
		if(temp->val == temp->next->val)
		{
			struct ListNode* temp1 = temp;
			while(temp1->next!=NULL && temp1->next->val==temp->val)
			{
				temp1 = temp1->next;
			}
			if(temp1->next->next==NULL && temp->val==temp1->next->val)
			{
				temp->next = NULL;			
			}
			else
			{
				prev = temp1->next;		
			}		
		}
		else
		{
			prev = temp;
		}
		temp = temp->next;
	}
	struct ListNode *p= head;
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
	duplicate();
	return 0;
}
