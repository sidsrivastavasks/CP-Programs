#include<stdio.h>
#include<math.h>

int CHECK(int n,int a)
{
	int res = n/a;
	int div = 0;
	if(n>=res)
	{
		div+=res;
		CHECK(res,a);
	}
	else
	{
		return div;
	}
}
int main()
{
	int n,a;
	scanf("%d%d",&n,&a);
	int fin = CHECK(n,a);
	printf("%d",fin);
return 0;	
}
