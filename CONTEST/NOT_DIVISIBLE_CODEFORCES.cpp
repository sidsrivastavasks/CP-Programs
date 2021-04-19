#include<stdio.h>
#include<math.h>

int main()
{
	int t,n,k,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		int count=0;
		for(i=1; i<=2*k; i++)
		{
			int num = 0;
			num = i%n;
			if(num!=0)
			{
				count++;
				if(count==k)
				{
					printf("%d",num);
				}
				else
				{
					continue;
				}
			}
		}
	}
	return 0;
}
