#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
#include <chrono> 
using namespace std::chrono;
using namespace std;
typedef long long ll;
using namespace __gnu_pbds;   
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update> 
#define ordered_mset tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update> 
#define fr(i,a,b) for (ll i=(a); i<(b);i++)
#define frr(i,a,b) for(ll i=(a-1);i>=(b);i--)
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define ppb pop_back()
#define pf push_front
#define ppf pop_front()
#define F first
#define S second
#define pii pair<int,int> 
#define rev(a) reverse(a.begin(),a.end())
#define srt(a) sort(a.begin(),a.end())
#define rsrt(a) sort(a.begin(),a.end(),greater<int>())
#define sz(a) (ll)a.size()
//#define endl "\n"
#define double long double
#define print(a) for(auto x:a)cout<<x<<" ";cout<<endl;
#define print2(a) for(auto x:a){for(auto y:x)cout<<y<<" ";cout<<endl;}; 

const ll M=1e9+7;
const int P=31;
const int MaxM=200005;
ll a,b,c,p,q,r;
bool is(ll i,ll j,ll k){
	 if(i==p)
	 {  if(j==q || k==r)return true;
	 	if(q-j==r-k)return true;
	 	if(j!=0 && k!=0 && q%j==0 && r%k==0 && q/j==r/k)return true;
	 	return false;
	 }
	 if(j==q)
	 {   if(i==p || k==r)return true;
	 	if(p-i==r-k)return true;
	 	if(i!=0 && k!=0 && p%i==0 && r%k==0 && p/i==r/k)return true;
	 	return false;
	 }
	 if(k==r)
	 {   if(j==q || i==p)return true;
	 	if(q-j==p-i)return true;
	 	if(j!=0 && i!=0 && q%j==0 && p%i==0 && q/j==p/i)return true;
	 	return false;
	 }

	 if(p-i==q-j && q-j==r-k)return true;
	 if(i!=0 && j!=0 && k!=0 && p%i==0 && q%j==0 && r%k==0 && p/i==q/j && q/j==r/k)return true;
	 return false;
}
 
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
      #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
   
   ll t;
   cin>>t;
   while(t--)
   {
   	cin>>a>>b>>c;
   	cin>>p>>q>>r;

    if(a==p && b==q && c==r){cout<<0<<endl;continue;}
   	if(is(a,b,c)){cout<<1<<endl;continue;}

   	if(p==q && q==r){cout<<2<<endl;continue;}
   	if(a!=b && (p-q)%(a-b)==0){
   		ll x=(p-q)/(a-b);
   		ll y=p-a*x; 
   		if(a*x+y==p && b*x+y==q && c*x+y==r){cout<<2<<endl;continue;}
   	}

   	if(is(p,b+p-a,c) || is(p,b,c+p-a) || is(p,b+p-a,c+p-a) || is(a+q-b,q,c) || is(a,q,c+q-b) || is(a+q-b,q,c+q-b) || is(a+r-c,b,r) || is(a,b+r-c,r) || is(a+r-c,b+r-c,r)){cout<<2<<endl;continue;}
   	if(a!=0 && p%a==0){
   		if(is(p,b*p/a,c) || is(p,b,c*p/a) || is(p,b*p/a,c*p/a)){cout<<2<<endl;continue;}
   	}
   	if(b!=0 && q%b==0){
   		if(is(a*q/b,q,c) || is(a,q,c*q/b) || is(a*q/b,q,c*q/b)){cout<<2<<endl;continue;}
   	}
   	  	if(c!=0 && r%c==0){
   		if(is(a*r/c,b,r) || is(a,b*r/c,r) || is(a*r/c,b*r/c,r)){cout<<2<<endl;continue;}
   	}
   	if(b!=0 && c!=0 && (q-p+a)%b==0 && (r-p+a)%c==0 && (q-p+a)/b==(r-p+a)/c){cout<<2<<endl;continue;}
   	if(a!=0 && c!=0 && (p-q+b)%a==0 && (r-q+b)%c==0 && (p-q+b)/a==(r-q+b)/c){cout<<2<<endl;continue;}
   	if(a!=0 && b!=0 && (q-r+c)%b==0 && (p-r+c)%a==0 && (q-r+c)/b==(p-r+c)/a){cout<<2<<endl;continue;}
   	cout<<3<<endl;
 
  }}