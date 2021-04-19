#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	ll int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int res = log(n)/log(2) + 1;
		cout<<res<<endl;
	}
	return 0;
}
