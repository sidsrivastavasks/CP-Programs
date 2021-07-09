#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define ld long double
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
	string s;
	cin>>s;
	map<char,int>mp;
	ll l = s.size();
	for(int i = 0; i<l; i++)
    {
        mp[s[i]]++;
    }
    bool ok = false;
    if(l%2==0)
    {
        ok = true;
    }
    int count = 0;
    for(auto itr = mp.begin(); itr!=mp.end(); itr++)
    {
        if(ok && (itr->second%2)!=0)
        {
            cout<<"NO SOLUTION";
            return ;
        }
        else if(!ok && (itr->second%2)==1)
        {
            count++;
            if(count>1)
            {
                cout<<"NO SOLUTION";
                return ;
            }
        }
    }
    string str = "";
    int i = 0;
    string mid = "";
    for(auto itr = mp.begin(); itr!=mp.end(); itr++)
    {
        if(ok && itr->second%2==0)
        {
            ll val = (itr->second)/2;
            while(val--)
            {
                cout<<itr->first;
                str.pb(itr->first);
                i++;
            }
        }
        else if(!ok && itr->second%2==0)
        {
            ll val = (itr->second)/2;
            while(val--)
            {
                cout<<itr->first;
                str.pb(itr->first);
                i++;
            }
        }
        else if(!ok && itr->second%2!=0)
        {
            while(itr->second--)
            {
                mid.pb(itr->first);
            }
        }
    }
    ll p = str.size();
    cout<<mid;
    for(int i = p-1; i>=0; i--)
    {
        cout<<str[i];
    }
}
int main()
{
	ll t =1;
	//cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}
