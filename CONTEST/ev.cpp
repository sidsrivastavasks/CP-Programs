#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		ll odd = 0,eve = 0;
		ll ans = 0,pos=s.length()-1;
		if((s[pos]-'0')%2==0)
		{
			for(int i = s.length()-1; i>=0; i--)
			{
				if((s[i]-'0')%2==0)
				{
					ans++;
				}
				else
				{
					pos = i;
					break;
				}
			}
		}
		ll sum = 0;
		for(int i = 0; i<=pos; i++)
		{
			sum+=s[i]-'0';
			if((s[i]-'0')%2==0)
			{
				eve++;
			}
			else
			{
				odd++;
			}
		}
		if(sum%2!=0)
		{
			if(odd==1)
			{
				cout<<"-1"<<endl;
			}
			else
			{
				ans++;
				cout<<ans<<endl;
			}
		}
		else
		{
			if(eve==pos)
			{
				cout<<"-1"<<endl;
			}
			else if(odd%2!=0)
			{
				ans++;
				cout<<ans<<endl;
			}
			else
			{
				cout<<ans<<endl;
			}
		}
	}
	return 0;
}
