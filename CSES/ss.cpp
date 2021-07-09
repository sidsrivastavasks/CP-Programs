#include<iostream>
using namespace std;
#define ll long long 
#define M 100
double power (double p, double q)
{
	ll int y=0;
	if(q==0){return 1;}
	else if(q%2.00==0.00)
	{
		y = power(p,q/2.00);
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
	double n;
	cin>>n;
	cout<<power(5,n);
	return 0;
}
