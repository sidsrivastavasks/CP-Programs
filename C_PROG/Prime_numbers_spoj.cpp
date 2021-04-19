#include<stdio.h>

int main()
{
	int n;
	int n1,n2,i,j,k,count=0;
	scanf("%d",&n);
	for(i=0; i<=n; i++)
	{
		scanf("%d%d",&n1,&n2);
		break;
	}
		for(j=n1+1; j<n2; j++)
		{
			for(k=2; k<n2; k++)
			{
				if(j%k==0)
				{
					count++;
				}
			}
			if(count==2)
			{
				printf("%d ",j);
			}
			else
			{
				continue;
			}
		}
	
	return 0;
}

