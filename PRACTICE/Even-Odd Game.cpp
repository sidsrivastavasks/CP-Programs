#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;cin>>n;
		vector<long long> v;
		long long al = 0,bob = 0;
		for(int i = 0; i<n; i++)
		{
			long long a;
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end(),greater<int>());
		for(int i = 0; i<n; i++)
		{
			if(i%2==0)
			{
				if(v[i]%2==0)
				{
					al+=v[i];
				}
			}
			else
			{
				if(v[i]%2!=0)
				{
					bob+=v[i];
				}
			}
		}
		if(al==bob)
		{
			cout<<"Tie"<<endl;
		}
		else if(bob>al)
		{
			cout<<"Bob"<<endl;
		}
		else
		{
			cout<<"Alice"<<endl;
		}
	}
	return 0;
}
