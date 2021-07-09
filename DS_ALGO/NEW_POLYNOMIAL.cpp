#include<stdio.h>
#include<stdlib.h>
struct poly{
	int cof;
	int pow;
	struct poly* next;
};
struct poly* head1=NULL,* head2 = NULL, *head3 = NULL;
void insert(int val,int a, int b)
{
	struct poly* temp;
	temp = (struct poly*)malloc(sizeof(struct poly));
	temp->cof = a;
	temp->pow = b;
	temp->next = NULL;
	if(val==1)
	{
		if(head1==NULL)
		{
			head1 = temp;
		}
		else
		{
			struct poly* p = head1;
			while(p->next!=NULL)
			{
				p = p->next;
			}
			p->next = temp;
		}
	}
	else if(val==2)
	{
		if(head2==NULL)
		{
			head2 = temp;
		}
		else
		{
			struct poly* p = head2;
			while(p->next!=NULL)
			{
				p = p->next;
			}
			p->next = temp;
		}	
	}
	else
	{
		if(head3==NULL)
		{
			head3 = temp;
		}
		else
		{
			struct poly* p = head3;
			while(p->next!=NULL)
			{
				p = p->next;
			}
			p->next = temp;
		}	
	}
}
void print(struct poly *head)
{
	printf("YOUR EXPRESION IS : ");
	while(head->next!=NULL)
	{
		printf("%dx^%d + ",head->cof,head->pow);
		head = head->next;
	}
	printf("%dx^%d\n\n",head->cof,head->pow);
}
void addboth()
{
	struct poly* temp1=head1,*temp2 = head2;
	while(temp1 && temp2)
	{
		if(temp1->pow>temp2->pow)
		{
			insert(3,temp1->cof,temp1->pow);
			temp1 = temp1->next;
		}
		else if(temp1->pow<temp2->pow)
		{
			insert(3,temp2->cof,temp2->pow);
			temp2 = temp2->next;
		}
		else
		{
			insert(3,temp1->cof+temp2->cof,temp1->pow);
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
	}
	if((temp1==NULL && temp2!=NULL)||(temp1!=NULL && temp2==NULL))
	{
		struct poly *temp3 = head3;
		while(temp3->next!=NULL)
		{
			temp3 = temp3->next;
		}
		if(temp2==NULL)
		{
			temp3->next = temp1;
		}
		else
		{
			temp3->next = temp2;
		}
	}
}
int main()
{
	int n,i;
	printf("ENTER THE SIZE OF THE 1ST EQUATION : ");
	scanf("%d",&n);
	int a,b;
	printf("ENTER THE %d COEFFICIENT AND POWER OF THE EQUAIONT\n\n",n);
	for(i = 0; i<n; i++)
	{
		printf("ENTER THE COEFFICIENT #%d : ",i+1);
		scanf("%d",&a);
		printf("ENTER THE POWER #%d : ",i+1);
		scanf("%d",&b);
		insert(1,a,b);
	}
	printf("\n");
	print(head1);
	int m;
	printf("ENTER THE SIZE OF THE 2ND EQUATION : ");
	scanf("%d",&m);
	printf("ENTER THE %d COEFFICIENT AND POWER OF THE EQUAIONT\n\n",m);
	for(i = 0; i<m; i++)
	{
		printf("ENTER THE COEFFICIENT #%d : ",i+1);
		scanf("%d",&a);
		printf("ENTER THE POWER #%d : ",i+1);	
		scanf("%d",&b);
		insert(2,a,b);
	}
	printf("\n");
	print(head2);
	addboth();
	print(head3);
	return 0;
}
