#include<bits/stdc++.h>
using namespace std;
long long gcd(int a, int b)
{
	while(b)
	{
		a%=b;
		swap(a,b);
	}
	return a;
}
int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
		long long a,b;
		cin>>a>>b;
		long long g = gcd(a,b);
		long long l = (a*b)/g;
		cout<<g<<" "<<l<<"\n";
	}
	return 0;
}
