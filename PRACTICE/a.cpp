#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i = 0; i<n; i++)
		{
			cin>>a[i];
		}
		set<int> s;
		for(int i = 0; i<n; i++)
		{
			for(int j = i+1; j<n; j++)
			{
				int k;
				k = abs(a[i]-a[j]);
				s.insert{k};
			}
		}
		cout<<s.size()<<endl;
	}
}
