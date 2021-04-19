#include<stdio.h>
#include<math.h>
int main()
{
	int n,res,sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		sum = sum*10 + n%10;
		n=n/10;
	}
	res=sum%10;
	if(res==2 || res==4 || res==5 || res==7 || res==9)
	{
		printf("hon");
	}
	else if(res==0 || res==1 || res==6 || res==8)
	{
	printf("pon");
	}
	else if(res==3)
	{
	printf("bon");
	}	
return 0;
}
