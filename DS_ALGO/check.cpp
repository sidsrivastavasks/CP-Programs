#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct poly
{
	int co;
	int exp;
	struct poly *next;
};
struct poly*create(struct poly *h)
{
	struct poly *temp, *tr=h;
	temp=(struct poly*)malloc(sizeof(struct poly));
	printf("\nEnter coefficient");
	scanf("%d", &temp->co);
	printf("\nEnter the exponent");
	scanf("%d", &temp->exp);
	temp->next=NULL;
	if(h==NULL)
	{
		h=temp;
	}
	else
	{
		while(tr->next!=NULL)
		{
			tr=tr->next;
		}
		tr->next=temp;
    }
    return h;
}
struct poly* poly_add(struct poly *p1, struct poly *p2)
{
	struct poly* head3 = NULL,*temp;
	while(p1->next && p2->next)
	{
		struct poly* p3;
		p3 = (struct poly*)malloc(sizeof(struct poly));
		p3->next=NULL;
		if(head3 == NULL)
		{
			if(p1->exp>p2->exp)
			{	
				p3->exp=p1->exp;
				p3->co=p1->co;
				p1=p1->next;
				head3 = p3;
				temp = head3; 
			}
			else if(p2->exp>p1->exp)
			{
				p3->exp=p2->exp;
				p3->co=p2->co;
				p2=p2->next;
				head3 = p3;
				temp=head3;
			}
			else
			{
				p3->exp=p1->exp;
				p3->co=(p1->co)+(p2->co);
				p1=p1->next;
				p2=p2->next;
				head3 = p3;
				temp = head3;
			}
		}
		else if(p1->exp>p2->exp)
		{
			p3->exp=p1->exp;
			p3->co=p1->co;
			p1=p1->next;
			temp = p3;
		}
		else if(p2->exp>p1->exp)
		{
			p3->exp=p2->exp;
			p3->co=p2->co;
			p2=p2->next;
			temp = p3;
		}
		else
		{
			p3->exp=p1->exp;
			p3->co=p1->co+p2->co;
			p1=p1->next;
			p2=p2->next;
			temp = p3;
		}
		temp = temp->next;
	}
	if((p1==NULL && p2!=NULL)||(p1!=NULL && p2==NULL))
	{
		struct poly *temp3 = head3;
		while(temp3->next!=NULL)
		{
			temp3 = temp3->next;
		}
		if(p2==NULL)
		{
			temp3->next = p1;
		}
		else
		{
			temp3->next = p2;
		}
	}
	return head3;
	
}
void display(struct poly *h)
{
	struct poly *t;
	t=h;
	if(t==NULL)
	{
		printf("\nEmpty list");
		return;
	}
	else
	{
		while(t->next!=NULL)
		{
			printf("%dx^%d+",t->co,t->exp);
			t=t->next;
			
		}
		printf("%dx^%d",t->co,t->exp);
    }
}
int main()
{
	struct poly *p1=NULL, *p2=NULL, *p3=NULL;
	int choice;
	while(1)
	{
		printf("\nPress 1 to create 1st polynomial");
		printf("\nPress 2 to create another polynomial");
		printf("\nPress 3 to add the two polynomials");
		printf("\nPress 4 to display added linked list" );
		printf("\n Press 5 to exit from linked list");
		printf("\n enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				p1=create(p1);
				display(p1);
				break;
			case 2:
				p2=create(p2);
				display(p2);
				break;
			case 3:
				p3=poly_add(p1, p2);
				break;
			case 4:
				display(p3);
				break;
			case 5:	
				exit(0);
			default:
				printf("\nWrong choice");
		}
   	}
	return 0;
	//getch();
}
