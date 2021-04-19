#include<bits/stdc++.h>
using namespace std;
#define ll long long 
bool slv(ll n)
{
	//time complexity using sieve of Eratoshthenes O(loglogn)
	ll prime[n+1];
	for(int i = 0; i<=n; i++)
	{
		prime[i]=1;
	}
	prime[0]=0;
	prime[1]=0;
	ll count = 0;
	//As the pair repeat after the square root
	//of any number so we will just check till square root
	//and update all the multiples of the no. to 0
	for(int i = 0; i<=sqrt(n); i++)
	{
		if(prime[i]==1)
		{
			for(int j = 2; i*j<=n; j++)
			{
				prime[i*j]=0;
			}
		}
	}
	//print all index which contains 1
	for(int i = 0; i<=n; i++)
	{
		if(prime[i]==1)
		{
			count++;
		}
		if(count>3)
		{
			return false;
		}
	}
return true;

}
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll a;
		cin>>a;
		//bool ok = true;
	
		if(slv(a))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
	
}
