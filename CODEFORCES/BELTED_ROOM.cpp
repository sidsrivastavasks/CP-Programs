#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		string s;
		cin>>s;
		ll dash = 0,clock = 0,anti = 0;
		for(int i = 0; i<n; i++)
		{
			if(s[i]=='-')
			{
				dash++;
			}
			else if(s[i]=='>')
			{
				clock++;
			}
			else
			{
				anti++;
			}
		}
		if(dash==n||anti==n||clock==n)
		{
			cout<<n<<endl;
		}
		else
		{
			ll count = 0;
			for(int i = 0; i<n; i++)
			{
				if(s[i]=='-' && s[(i+1)%n]=='-')
				{s
					count+=3;
					i++;
				}
								
			}
			cout<<count<<endl;
		}
	}
	return 0;
}
