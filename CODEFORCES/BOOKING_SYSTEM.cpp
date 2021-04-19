#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<pair<int, pair<int,int> > >v;
	for(int i = 0; i<n; i++)
	{
		int num,amt;
		cin>>num>>amt;
		v.push_back(make_pair(amt,make_pair(num,i+1)));
	}
	sort(v.begin(),v.end());
	/**for(int i = 0; i<n; i++)
	{
		cout<<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second<<endl;
	}**/
	int tables;
	cin>>tables;
	vector<pair< int, int > >table;
	for(int i = 0; i<tables; i++)
	{
		int num;
		cin>>num;
		table.push_back(make_pair(num,i+1));
	}
	sort(table.begin(),table.end());
	int count = 0;int amount = 0;
	vector<pair<int,int> > record;
	for(int i = n-1; i>=0; i--)
	{
		for(int j = 0; j<tables; j++)
		{
			if(v[i].second.first<=table[j].first)
			{
				count++;
				amount+=v[i].first;
				record.push_back(make_pair(v[i].second.second,table[j].second));
				table[j].first = 0;
				break;
			}
		}
	}
	cout<<count<<" "<<amount<<endl;
	for(int i = 0; i<record.size(); i++)
	{
		cout<<record[i].first<<" "<<record[i].second<<endl;
	}
	
	return 0;
}
