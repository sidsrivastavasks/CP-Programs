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
void solve(int test)
{
	
		int X,Y;
		string s;
		cin>>X>>Y>>s;
		string str = s;
		bool ok = false;
		int cost = 0;
		if(str[0]=='?'){
			char pp = 'J';
			int pos = str.length();
			for(int i = 0; i<str.length(); i++){
					if(str[i]!='?'){
						pp = str[i];
						pos = i;
						break;
					}			
			}
			for(int i = 0; i<pos; i++){
				str[i] = pp;
			}
		}
		char prev = str[0];
		for(int i = 1; i<str.length(); i++){
			if(prev=='J' && str[i] == '?'){
				str[i] = 'J';				
			}
			else if(prev=='C' && str[i]=='?'){
				str[i] = 'C';
			}
			prev = str[i];
		}
		
		//cout<<str<<endl;
		for(int i = 0; i<str.length()-1; i++){
			if(str[i]=='C' && str[i+1]=='J'){
				cost+=X;
			}
			else if (str[i]=='J' && str[i+1]=='C'){
				cost+=Y;
			}
		}
		cout<<"Case #"<<test<<": "<<cost<<endl;
	
}
int main()
{
	ll t;
	cin>>t;
	int test = 1;
	while(t--)
	{
		solve(test);
		test++;
	}
    return 0;
}

