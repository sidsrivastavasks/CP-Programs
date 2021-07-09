#include<stdio.h>
#include<stdlib.h>
int a[10];
int push(int top,int x)
{
	if(top==9)
	{
		printf("OOPS! STACK OVERFLOW\n");
	}
	else
	{
		top++;
		a[top] = x;
	}
	return top;
}
int pop(int top)
{
	if(top==-1)
	{
		printf("OOPS! STACK UNDERFLOW\n");
	}
	else
	{
		top--;
	}
	return top;
}
void display(int top)
{
	if(top==-1)
	{
		printf("STACK IS EMPTY\n");
	}
	else
	{
		for(int i = 0; i<=top; i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
	}
}
void rev(int top)
{
	//int dummy = top;
	int i = 0;
	while(i!=top)
	{
		a[i] = a[top];
		i++;
	}
}
int main()
{
	int choice,top=-1;
    while(1)
    {
        printf("PRESS 1 TO PUSH ELEMENTS\n");
        printf("PRESS 2 TO POP THE ELEMENT\n");
        printf("PRESS 3 TO DISPLAY DATA IN THE ELEMENT\n");
        printf("PRESS 4 TO REVERSE THE ELEMENTS\n");
        printf("PRESS 5 TO EXIT\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("ENTER THE SIZE OF THE STACK : ");
			int n;scanf("%d",&n);printf("PLEASE ENTER %d DATA : ",n);
			for(int i = 0; i<n; i++)
			{
				int x;scanf("%d",&x);
				top = push(top,x);
			}break;
            case 2: top = pop(top);break;
            case 3: display(top);break;
            case 4: rev(top)
			case 5: exit(0);
            default:printf("SORRY!! INVALID INPUT...\n");
        }
    }
    return 0;
}
