#include<stdio.h>

int main()
{
    float a,b,result;
	char op;
	printf("ENTER THE FIRST NUMBER: \n");
	scanf("%f",&a);
	printf("ENTER OPERATOR(+,-,/,*): \n");
	scanf("%c",&op);
	printf("ENTER THE SECOND NUMBER: \n");
	scanf("%f",&b);
	
	switch(op)
	{
		case'+':
		result=a+b;
		break;
		case'-':
		result=a-b;
		break;
		case'*':
		result=a*b;
		break;
		case'/':
		result=a/b;
		
		defult:printf("ERROR...");
	}
	printf("RESULT : %f",result);
	return 0;
}
