#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	long long int t,k,h;
	double a,b,c,d,e,g,f;
	scanf("%lld",&t);
	while(t--)
	{
		k=0;
		f=0;
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		if(b>=a)
		{
			printf("%lld\n",b);
		}
		else if(d>=c)
		{
			printf("-1\n");
		}

		else if(a>b && c>d)
		{
				e = (a-b); g = (c-d);
				h = ceil(e/g);
				k = (b+(c*h));
				printf("%lld\n",k);
		}

	}
	return 0;
}
