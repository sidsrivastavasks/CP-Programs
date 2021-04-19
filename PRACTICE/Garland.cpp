#include<bits/stdc++.h>
using namespace std;
int num(int n,set<int>s,int a)
{
	if(a%2==0)
	{
		for(int i = 1; i<=n; i++)
		{
			if(i%2==0 && s.find(i)==s.end())
			{
				return i;
			}
		}
		for(int i = 1; i<=n; i++)
		{
			if(i%2!=0 && s.find(i)==s.end())
			{
				return i;
			}
		}
	}
	else
	{
		for(int i = 1; i<=n; i++)
		{
			if(i%2!=0 && s.find(i)==s.end())
			{
				return i;
			}
		}
		for(int i = 1; i<=n; i++)
		{
			if(i%2==0 && s.find(i)==s.end())
			{
				return i;
			}
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	set<int> s;
	for(int i = 0; i<n; i++)
	{
		cin>>a[i];
		s.insert(a[i]);
	}
	bool ok = false;
	int i = 0;
	if(a[0]==0 && a[1]==0)
	{
		while(i<=n && i>=0)
		{
			if(a[i+1]!=0)
			{
				int r = num(n,s,a[i+1]);
				a[i] = r;
				s.insert(r);
				i--;
			}
			else
			{
				i++;
			}
		}
	}
	for(int i = 0; i<n; i++)
	{
		if(a[i]==0 && i==0)
		{
			int r = num(n,s,a[i+1]);
			a[i] = r;
			s.insert(r);
			ok = true;
		}
		else if(a[i]==0)
		{
			int r = num(n,s,a[i-1]);
			a[i] = r;
			s.insert(r);
		}
	}
	/**for(int i = 0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}**/
	cout<<endl;           // 1 5 4 2 3
	int count = 0;
	for(int i = 0; i<n-1; i++)
	{
		if(a[i]%2!=a[i+1]%2)
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}
