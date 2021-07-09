#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007
#define pb push_back
ll ModExponent(ll p, ll q)
{
	ll int y=0;
	if(q==0){return 1;}
	if(q==1){return p;}
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
void solve(){
	ll n;
	cin>>n;
	ll a[n];
	ll sum = 0;
	for(int i = 0; i<n; i++){
		cin>>a[i];
		sum+=a[i];
		sum%=M;
		
		if(sum < 0) sum += M;
        sum %= M;
	}
	ll q;
	cin>>q;
	while(q--){
		ll pp;
		cin>>pp;
		sum = ((sum%M)*(2%M))%M;
		if(sum < 0) sum += M;
		sum%=M;
		cout<<sum<<endl;
	}
}
int main() {
	ll t = 1;
	//cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
