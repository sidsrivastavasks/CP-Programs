#include<stdio.h>
#include<math.h>
#define ll long long int
ll minpow2(ll x)
{
	ll power = 1;
	while(power*2<= x)
    	power*=2;
    return power;
}
ll pos(ll a[],ll n,ll x,ll i)
{
		for(int k = i+1; k<n-1; k++)
		{
			ll temp = a[k]^x;
			if(temp < a[k])
			{
				return k;
			}
		}
		return (n-1);
}
int main()
{
	ll t;
	scanf("%lld",&t);
	while(t--)
	{
		ll i=0,n,k,g,f,org;
		scanf("%lld",&n);scanf("%lld",&k);
		ll a[n];
		for(f = 0; f<n; f++)
		{
			scanf("%lld",&a[f]);
		}
		for(g = k; g>0 && i<n-1; g--)
		{
			ll r = minpow2(a[i]);
			a[i] = a[i]^r;
			ll j = pos(a,n,r,i);
			a[j] = a[j]^r;
			
			while(a[i]<=0)
			{
				i++;
			}
			org = g+1;
		}
		if(org>0)
		{
			if(n<3 && org%2>0)
			{
				a[n-2]^=1;
				a[n-1]^=1;
			}
		}
		for(ll i = 0; i<n; i++)
		{
			printf("%lld ",a[i]);
		}
		printf("\n");
	}
}
