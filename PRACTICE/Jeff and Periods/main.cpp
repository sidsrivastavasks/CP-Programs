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
	ll n;
	cin>>n;
	ll a[n];
	map<int, pair <int,int> > mp;
	map<int, pair <int,int> >:: iterator it;
	for(int i = 0; i<n; i++){
        cin>>a[i];
	}
	for(int i = 0; i<n; i++){
        if(mp.find(a[i])== mp.end())
            mp[a[i]] = {i+1,0};
	}
	/*for(auto itr = mp.begin(); itr!=mp.end(); itr++){
        cout<<itr->first<<" "<<(itr->second).second<<" "<<(itr->second).first<<endl;
	}*/
	int cnt = 0;
	for(int i = 0; i<n; i++){
        it = mp.find(a[i]);
        if(it!=mp.end()){
            if((it->second).first!=i+1 && (it->second).second==0){
                (it->second).second = i+1 - (it->second).first;
                (it->second).first = i+1;
            }
            else{
                if((it->second).second != (i+1 - (it->second).first)){
                    //mp[a[i]] = {-1,-1};
                    mp.erase(a[i]);
                    //cnt++;
                }
                else{
                    ((it->second).first) = i+1;
                }
            }
        }
	}
	cout<<mp.size()<<endl;
	for(auto itr = mp.begin(); itr!=mp.end(); itr++){
	    //  if((itr->second).first!= -1)
            cout<<itr->first<<" "<<(itr->second).second<<endl;
	}
}
int main()
{
	int t = 1;
	//cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}
