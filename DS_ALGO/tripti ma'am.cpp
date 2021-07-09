#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct poly
{
	int co;
	int exp;
	struct poly *next;
};
struct poly*create(struct poly *h,int n)
{
	struct poly *temp, *tr=h;
	int i;
	for(i=1;i<=n;i++)
	{

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
    		tr=h;
			while(tr->next!=NULL)
			{
				tr=tr->next;
			}
			tr->next=temp;
    	}
	}
    return h;
}

void polyadd(struct poly *p1,struct poly *p2,struct poly *p3)
{
 	while(p1 &&  p2)
 	{
  		if(p1->exp>p2->exp)
  		{
   			p3->exp=p1->exp;
   			p3->co=p1->co;
   			p1=p1->next;
   		}
  		else if(p1->exp<p2->exp)
  		{
   			p3->exp=p2->exp;
   			p3->co=p2->co;
   			p2=p2->next;
   		}
  		else
  		{
   			p3->exp=p1->exp;
   			p3->co=p1->co+p2->co;
   			p1=p1->next;
   			p2=p2->next;
   		}
   		if(p1!=NULL || p2!=NULL)
   		{
   			p3->next = (struct poly*)malloc(sizeof(struct poly));
   			p3=p3->next;
   			p3->next = NULL;
		}

 	}
 	while(p1 || p2)
 	{
  		if(p1==NULL && p2!=NULL)
   		{
   			p3->exp = p2->exp;
   			p3->co = p2->co;
   			p2 = p2->next;
		}
		else
		{
			p3->exp = p1->exp;
   			p3->co = p1->co;
   			p1 = p1->next;
		}
		if(p1!=NULL || p2!=NULL)
   		{
   			p3->next=(struct poly *)malloc(sizeof(struct poly));
   			p3=p3->next;
			p3->next=NULL;
		}
   	}
}

void display(struct poly *h)
{
    struct poly *t;
    t=h;
    while(t!=NULL)
    {
    	printf("%dx^%d+", t->co, t->exp);
    	t = t->next;
    }
    printf("\n");
}
int main()
{
	struct poly *p1=NULL, *p2=NULL, *p3=NULL;
	int choice,n;
	while(1)
	{
		printf("\nPress 1 to create 1st polynomial");
		printf("\nPress 2 to create another polynomial");
		printf("\nPress 3 to add the two polynomials");
		printf("\nPress 4 to display added linked list" );
		printf("\nPress 5 to exit from linked list");
		printf("\nenter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
    			printf("\n Enter number of term");
    			scanf("%d",&n);
				p1=create(p1,n);
				display(p1);
				break;
			case 2:
    			printf("\n Enter number of term");
    			scanf("%d",&n);
				p2=create(p2,n);
				display(p2);
				break;
			case 3:
				p3=(struct poly*)malloc(sizeof(struct poly));
				polyadd(p1, p2, p3);
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
}
