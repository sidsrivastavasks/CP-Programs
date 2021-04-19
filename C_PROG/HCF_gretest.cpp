#include<stdio.h>
#include<math.h>

int main()
{
	long long int n1, n2,i;
	long long int count =0;
	scanf("%lld%lld", &n1,&n2);
	long long int gret= (n1>n2)? n1 : n2;
	for(i=1; i<=gret; i++)
	{
		if(n1%i==0 && n2%i==0)
		{
		 count=i;
		}
	
	}
	printf("%lld",count);

	return 0;
}
