#include <bits/stdc++.h>
#include <cmath>
#define ll long long
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vl vector<int>
#define endl "\n"
#define allb(x) sort((x).begin(), (x).end())
#define allg(x) sort((x).begin(), (x).end(), greater<int>())
using namespace std;
const ll M = 1e9+7;

ll GCD(ll a, ll b)
{
	if(a==0){return b;}
	if(b==0){return a;}
	return GCD(b,a%b);
}
ll GCD_EUCLID(ll a, ll b)
{
	ll dividend = a>=b ? a:b;
	ll divisor = a<=b ? a:b;
	while(divisor!=0)
	{
		ll remainder = dividend%divisor;
		dividend = divisor;
		divisor = remainder;
	}
	return dividend;
}
ll ModExponent(ll p, ll q)
{
	ll int y=0;
	if(q==0){return 1;}
	if(q%2==0)
	{
		y = ModExponent(p,q/2);
		return (y*y)%M;
	}
	else
	{
		y = ModExponent(p,q-1);
		return ((p%M)*(y))%M;
	}

}
void PrimeNumbers()
{
	//time complexity using sieve of Eratoshthenes O(loglogn)

	int n;
	cin>>n;
	int prime[n+1];
	for(int i = 0; i<=n; i++)
	{
		prime[i]=1;
	}
	prime[0]=0;
	prime[1]=0;
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
			cout<<i<<" ";
		}
	}
	cout<<"\n";

}
void solve()
{
	ll n;
	cin>>n;
	vl v;
	for(int i =0; i<n; i++)
    {
        int a;
        cin>>a;
        v.pb(a);
    }
    vl v1;
    for(int i = 0; i<n-1; i++)
    {
        int a;
        cin>>a;
        v1.pb(a);
    }
    vl v2;
    for(int i = 0; i<n-2; i++)
    {
        int a;
        cin>>a;
        v2.pb(a);
    }
    allb(v);
    allb(v1);
    allb(v2);
    for(int i = 0; i<n; i++)
    {
        if(v[i]!=v1[i])
        {
            cout<<v[i]<<endl;
            break;
        }
    }
    for(int i = 0; i<n; i++)
    {
        if(v1[i]!=v2[i])
        {
            cout<<v1[i]<<endl;
            break;
        }
    }
}

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}
