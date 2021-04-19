#include <bits/stdc++.h>
#include <cmath>
#define ll long long
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vl vector<int>
#define vpi vector<pair<int,int> >
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
	vector<pair<string,int> >v(n);
	string s;
	ll x;
	for(int i = 0; i<n; i++)
    {
        cin>>s>>x;
        v.pb(mp(s,x));
    }
    allb(v);ll c=0;
    for(int i = 0; i<n; i++)
    {
        ll countz = 0,counto=0;
        while(v[i].first==v[i+1].first)
        {
            if(v[i].second==0)
            {
                countz++;
                i++;
            }
            else
            {
                counto++;
                i++;
            }
        }
        if(v[i].second == 1)
        {
            counto++;
        }
        if(v[i].second == 0)
        {
            countz++;
        }
        c+=max(countz,counto);
    }
    cout<<c<<endl;
}

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}
