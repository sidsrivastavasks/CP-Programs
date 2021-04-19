#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll closepoweroftwo(ll x)
{
	ll power = 1;
	int count = 1;
	while(power*2 <= x){
	   	power*=2;
    	count++;
		}
    return count;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<closepoweroftwo(n)<<endl;
	}
	
}
