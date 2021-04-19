#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define allb(x) sort((x).begin(), (x).end())
#define allg(x) sort((x).begin(), (x).end(), greater<int>())
const ll M = 1e9+7;


typedef pair<int,int>	pii;
typedef pair<ll,ll>		pll;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pll>		vpll;

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
	ll n,x,p,k;
	cin>>n>>x>>p>>k;
	vi v;
	for(ll i = 0; i<n; i++)
    {
        int a;
        cin>>a;
        v.pb(a);
    }
    allb(v);
    if(v[p-1]==x)
    {
        cout<<"0"<<endl;
    }
    else if(p==k)
    {
        if(v[p-1]<x)
        {
            ll ans = 0;
            for(ll i = p-1; i<n; i++)
            {
                if(v[i]<x)
                {
                    ans++;
                }
            }
            cout<<ans<<endl;
        }
        else if(v[p-1]>x)
        {
            ll ans = 0;
            for(ll i = p-1; i>=0; i--)
            {
                if(v[i]>x)
                {
                    ans++;
                }
            }
            cout<<ans<<endl;
        }
    }
    else if(p<k)
    {
        if(v[p-1]<x)
        {
            cout<<"-1"<<endl;
        }
        else if(v[p-1]>x)
        {
           ll ans = 0;
            for(ll i = p-1; i>=0; i--)
            {
                if(v[i]>x)
                {
                    ans++;
                }
            }
            cout<<ans<<endl;
        }

    }
    else if(p>k)
    {
        if(v[p-1]<x)
        {
            ll ans = 0;
            for(ll i = p-1; i<n; i++)
            {
                if(v[i]<x)
                {
                    ans++;
                }
            }
            cout<<ans<<endl;
        }
        else if(v[p-1]>x)
        {
            cout<<"-1"<<endl;
        }
    }
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