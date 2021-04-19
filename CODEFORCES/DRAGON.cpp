#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main() {
	int s,n;
	cin>>s>>n;
	vector<pair<int,int>> v;
	for(int i = 0; i<n; i++)
	{
		int x,y;
		cin>>x>>y;
		v.pb(mp(x,y));
	}
	sort(v.begin(),v.end());
	int flag = 0;
	for(int i =0; i<n; i++)
	{
		if(v[i].first<s)
		{
			s+=v[i].second;
			flag = 0;
		}
		else
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
