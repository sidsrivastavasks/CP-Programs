#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n>>x;
		ll a[n];
		ll sum = 0,mini = 0,count = 0;
		for(int i = 0; i<n; i++)
		{
			cin>>a[i];
			sum+=a[i];
			if(a[i]%x!=0)
			{
				count++;
			}
		}
		ll ans = (sum+count);
		ll ans2 = (sum);
		if(ans%x!=0)
		{
			ans = (ans/x)+1;
		}
		else
		{
			ans/=x;
		}
		if(ans2%x!=0)
		{
			ans2 = (ans2/x)+1;
		}
		else
		{
			ans2/=x;
		}
		cout<<ans2<<" "<<ans<<endl;
	}
	return 0;
}
