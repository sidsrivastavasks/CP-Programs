#include<bits/stdc++.h>
using namespace std;
int main()
{
	int strn,drgn;
	cin>>strn>>drgn;
	vector<pair<int, int> >v;
	for(int i = 0; i<drgn; i++)
	{
		int a,b;
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}	
	sort(v.begin(),v.end());
	bool ok = true;
	for(int i = 0; i<drgn; i++)
	{
		if(strn<=v[i].first)
		{
			ok = false;
			break;
		}
		else
		{
			strn+=v[i].second;
		}
	}
	if(ok)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
