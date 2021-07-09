#include<iostream>
using namespace std;
#define ll long long 
int main()
{
	ll int t,n;
	cin>>t;
	while(t--)
	{
		ll int count = 0;
		cin>>n;
		for(int i =1; i<=n; i++)
		{
			if(n%i==0)
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;	
}
