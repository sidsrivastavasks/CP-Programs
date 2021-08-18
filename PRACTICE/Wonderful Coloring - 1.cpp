#include <bits/stdc++.h>
using namespace std;					
#define ll long long
#define pb push_back
#define mp make_pair
#define endl "\n"
#define ld long double
#define vl vector<long long>
#define allb(x) sort((x).begin(), (x).end())
#define allg(x) sort((x).begin(), (x).end(), greater<int>())
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve()
{
	string s; 
	cin>>s;
	map<char,int> mp;
    
    for(int i = 0; i<s.length(); i++){
    	mp[s[i]]++;  	
	}
    
    vector<char> a,b;
    for(auto itr = mp.begin(); itr!=mp.end(); itr++){
        if(itr->second == 1) {
        	a.pb(itr->first);
		}	
        else if(itr->second>=2){
        	b.pb(itr->first);	
		}
    }
    ll ans = a.size()/2 + b.size();
    
	cout<<ans<<endl;
}
int main()
{
	FIO;
	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}
