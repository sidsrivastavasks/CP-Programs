#include<stdio.h>
int main()
{
	int n, G, K, i,j,k,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&G);
		k=0;
		for(K=1;K<=G;K++)
		{
			t=0;
			j=1;
			while(t<G)
			{
				t=t+(k+j-1);
				j++;
			}
		
		}
		printf("Case #%d: %d\n",i+1,k);
    
	}
return 0;
}
