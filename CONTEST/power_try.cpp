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
	long long int n,k;
	long long int res = power(2,19);
	printf("%lld\n",res);
	long long int fin = 1000000000000000000/res;
	printf("%lld",fin);
	
return 0;
}
