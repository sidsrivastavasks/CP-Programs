#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(vector<ll> a, ll n)
{
	map<int, int>fr;
	//sort(a.begin(),a.end());
	for(ll i =0; i<n; i++)
	{
		fr[a[i]]++;
	}
	for(auto itr = fr.begin(); itr!=fr.end();itr++)
	{
		if(itr->second%2!=0)
		{
			cout<<itr->first<<" ";
			break;
		}
	}
}
void findMissing(vector<ll>a, vector<ll>b,ll n) 
{ 
	vector <ll> v1;
	vector<ll> v2;
	ll sum = 0;
    unordered_set <int> s;
    unordered_set<int> s1;
    for (ll i = 0; i < n; i++) 
       { s.insert(b[i]); }
        
    for (ll i = 0; i < n; i++) 
    {  
      	if (s.find(a[i]) == s.end()) 
           {
           		v1.push_back(a[i]);
           } 
    } 
    for (ll i = 0; i < n; i++) 
       { s.insert(a[i]); }
        
    for (ll i = 0; i < n; i++) 
    {  
      	if (s.find(b[i]) == s.end()) 
           {
           		v2.push_back(b[i]);
           } 
    } 
    solve(v1,n);
    
}           
int main() {
	ll t,a,b,n;
	cin>>t;
	vector <ll> A;
	vector <ll> B;
	while(t--)
	{
		cin>>n;
		for(ll i = 0; i<n; i++)
		{
			cin>>a;
			A.push_back(a);
		}
		for(ll i = 0; i<n; i++)
		{
			cin>>b;
			B.push_back(b);
		}
		sort(A.begin(),A.end());
		sort(B.begin(),B.end());
		findMissing(A,B,n);
		findMissing(B,A,n);
		/*for(ll i = 0; i<n; i++)
		{
			cout<<ad[i]<<" ";
		}
		for(ll i = 0; i<n; i++)
		{
			cout<<bd[i]<<" ";
		}*/
	}
	return 0;
}
