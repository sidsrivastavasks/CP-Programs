#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll numofhouse,works;
	cin>>numofhouse>>works;
	ll current = 1,ans = 0;
	for(int i = 0; i<works; i++)
	{
		ll workhouse;
		cin>>workhouse;
		if(current<workhouse)
		{
			ans+= workhouse-current;
			current = workhouse;
		}
		else if(current>workhouse)
		{
			ans+= (numofhouse-current)+(workhouse);
			current = workhouse;
		}
	}
	cout<<ans;
	return 0;
}
