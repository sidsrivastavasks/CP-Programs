#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main() {
	int t,i,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		map <char,int> mp;
		char s[n];
		for(i = 0 ; i<n; i++)
		{
			cin>>s[i];
		}
		for(i = 0; i<n; i++)
		{
			mp[s[i]]++;
		}
		int flag = 0;
		for(auto itr = mp.begin(); itr!=mp.end(); itr++)
		{
			if(itr->second%2!=0)
			{
				flag = 1;
				break;
			}
			else
			{
				flag = 0;
			}
		}
		if(flag==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
