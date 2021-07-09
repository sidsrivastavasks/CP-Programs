#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,m;
	scanf("%lld%lld",&n,&m);
    long long int k= n%10;
	if(m==0 || m==1)
	printf("%lld",k%10);
	else if(m==2)
	printf("%lld",(k*k)%10);
	else if(m==3)
	printf("%lld",(k*k*k*k*k*k)%10);
	else if(m==4)
	printf("%lld",(k*k*k*k)%10);
	else
	printf("1");
	
return 0;
}
