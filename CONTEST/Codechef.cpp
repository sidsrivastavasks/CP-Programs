#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	int a,b,c,d,e,p,res;
	while(t--)
	{
		res = 0;
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&p);
		res = (a+b+c+d+e)*(p);
		if(res<=120)
		{
			printf("No\n");
		}
		else
		{
			printf("Yes\n");
		}
	}
	return 0;
}
