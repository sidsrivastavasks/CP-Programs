#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,k,t,p,q,res,count;
	scanf("%d",&t);
	while(t--)
	{
		count =0;
		res =0;
	scanf("%d%d%d",&n,&m,&k);
	if(m==0)
	{
		printf("0\n");
	}
	else if(n/k>=m)
	{
		printf("%d\n",m);
	}
	else if(n/k==k/(m*2))
	{
		printf("0\n");
	}
	else if(n/k<m)
	{
		p = m-(n/k);
		q = k-2;
		res = p/q;
		count = n/2 - res;
		printf("%d\n",count);
	}
	}
	return 0;
}
