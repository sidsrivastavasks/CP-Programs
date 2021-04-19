#include<bits/stdc++.h>
using namespace std;
#define ll long long
void PrimeNumbers(ll n)
{
	//time complexity using sieve of Eratoshthenes O(loglogn)
	ll prime[n+1];
	for(ll i = 0; i<=n; i++)
	{
		prime[i]=1;
	}	
	prime[0]=0;
	prime[1]=0;
	//As the pair repeat after the square root 
	//of any number so we will just check till square root
	//and update all the multiples of the no. to 0 
	for(ll i = 0; i<=sqrt(n); i++)
	{
		if(prime[i]==1)
		{
			for(ll j = 2; i*j<=n; j++)
			{
				prime[i*j]=0;
			}
		}
	}
	//print all index which contains 1
	ll count = 0;
	//vector<ll> v;
	ll k = 2;
	for(ll i = 0; i<=n; i++)
	{
		if(prime[i]==1 && k+2==i)
		{
			count++;
		}
		if(prime[i]==1){
			k = i;
		}
		
	}
	printf("%lld\n",count);
	/**for(int i = 0; i<=n; i++)
	{
		if(prime[i]==1)
		{
			cout<<i<<" ";
		}
	}
	cout<<"\n";**/

}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	scanf("%lld",&t);
	while(t--)
	{
		ll n;
		scanf("%lld",&n);
		PrimeNumbers(n);
	}
}

