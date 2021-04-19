#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,k,count,i,a;
	scanf("%d",&t);
	while(t--)
	{
		count = 0;
		scanf("%d%d",&n,&k);
		for(i=0; i<n; i++)
		{
			scanf("%d",&a);
			if(a>k)
			{
				count+= (a-k);
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
