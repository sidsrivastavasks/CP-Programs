#include<iostream>
using namespace std;
#define ll long long 
#define M 1000000007
ll int power (ll p, ll q)
{
	ll int y=0;
	if(q==0){return 1;}
	else if(q%2==0)
	{
		y = power(p,q/2);
		return (y*y)%M;
	}
	else 
	{
		y = power(p,q-1);
		return ((p%M)*(y))%M;
	}
	
}
int main()
{
	ll int n,m,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int res = power(n,m);
		cout<<res<<endl;
	}
}
