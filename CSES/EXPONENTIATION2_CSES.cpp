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
ll int power1 (ll p, ll q)
{
	ll int y=0;
	if(q==0){return 1;}
	else if(q%2==0)
	{
		y = power(p,q/2);
		return (y*y);
	}
	else 
	{
		y = power(p,q-1);
		return ((p)*(y));
	}
	
}
int main()
{
	ll int n,m,t,c;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>c;
		ll int res = power(m,c);
		ll int fin = power1(n,res);
		cout<<fin%M<<endl;
	}
}
