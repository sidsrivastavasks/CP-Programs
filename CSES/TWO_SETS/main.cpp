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
    ll n;
	cin>>n;
	ll nums[n];
	for(int i = 0; i<n; i++)
    {
        nums[i] = i+1;
    }
	ll totalsum = (n*(n+1))/2;
	if(totalsum%2!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        ll mid = totalsum/2;
        vl set1,set2;
        ll sum = 0;int ptr1 = 0; int ptr2 = n-1;
        while (n)
        {
            if (mid - n >= 0)
            {
                set1.pb(n);
                mid -= n;
            }
            else
            {
                set2.pb(n);
            }
            n--;
        }
        cout<<"YES"<<endl;
        cout<<set1.size()<<endl;
        for(int i = 0; i<set1.size(); i++)
        {
            cout<<set1[i]<<" ";
        }
        cout<<endl;
        cout<<set2.size()<<endl;
        for(int i = 0; i<set2.size(); i++)
        {
            cout<<set2[i]<<" ";
        }
        cout<<endl;
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
