#include<stdio.h>
#include<math.h>

long long int power(long long int x, long long int y) 
{ 
	if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 

int main()
{
	long long int t,k,count,r,i;
	scanf("%lld",&t);
	while(t--)
	{
		count = 0;
		scanf("%lld",&k);
		while(!(k & 1))
    	{
        	count++;
        	k >>= 1;
    	}
    	r = count + 1;
    	long long int res = power(2,r);
    	
    	long long int final = k/res;
   		printf("%lld\n",final);
	}
	return 0;
}
  

