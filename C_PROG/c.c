#include<stdio.h>

void main()
{
	int a,b,c;
	printf("enter num1");
	scanf("%d",&a);
	printf("enter num2");
	scanf("%d",&b);
	printf("enter num3");
	scanf("%d",&c);
	
	if(a>b&&b>c)
	printf("\n a:%d",a);
	if(b>a&&b>c)
	printf("\n b:%d",b);
	if(c>a&&c>b)
	printf("\n largest: %d",c);
	
	
}
