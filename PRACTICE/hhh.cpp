#include <bits/stdc++.h>
using namespace std;					
//==========================================================//
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
//==========================================================//
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
bool is_prime(int a)
{
	
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
		ll A,B,n,pp=0;
		cin>>A>>B>>n;
		ll a[n],b[n];
		for(int i = 0; i<n; i++){
			cin>>a[i];
		}
		for(int i = 0; i<n; i++){
			cin>>b[i];
		}
		
		vpll v;
		for(int i = 0; i<n; i++){
			v.pb(mp(a[i],b[i]));
		}
		
		allb(v);
		bool ok = true;
		ll monster = 0;
		
		for(int i = 0; i<v.size()-1; i++){
			ll pr = 1 + ((v[i].second - 1)/A);;
			ll kk = (v[i].first)*pr;
			B-= kk;
			monster++;
			if(B<1 && monster<n){
				ok = false;
				break;
			}			
		}
		if(ok){
			
				while(B>0 && v[n-1].second>0){
					B-= v[n-1].first;
					v[n-1].second-=A;
				}
				if(B<1 && v[n-1].second>0){
					ok = false;
				}
			
		}
		if(ok){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
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

