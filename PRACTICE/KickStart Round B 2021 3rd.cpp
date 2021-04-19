#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
vector<ll> v;
void PrimeNumbers()
{
	//time complexity using sieve of Eratoshthenes O(loglogn)
	
	ll n = 100000;
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
			for(int j = 2; i*j<=n; j++)
			{
				prime[i*j]=0;
			}
		}
	}
	//print all index which contains 1
	for(ll i = 0; i<=n; i++)
	{
		if(prime[i]==1)
		{
			v.pb(i);
		}
	}
	// cout<<"\n";

}

void solve (ll tt){
	ll ans = 0;
	ll z;
	cin>>z;
	for(ll i = 0; i<v.size(); i++){
		if(v[i]*v[i+1]<=z){
			ans = v[i]*v[i+1];
		}
		else{
			break;
		}
	}
	cout<<"Case #"<<tt<<": "<<ans<<endl;
}
int main(){
	ll t;
	cin>>t;
	ll tt = 1;
	PrimeNumbers();
	while(t--){
		solve(tt);
		tt++;
	}
}
