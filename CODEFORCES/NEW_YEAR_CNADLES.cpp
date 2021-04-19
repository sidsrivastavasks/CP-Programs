#include<stdio.h>
#include<math.h>
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int b = n;
	while(n>=k)
	{
		b+=n/k;
		n = n/k;
	}
	printf("%d",b);
	return 0;
}
