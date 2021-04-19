#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char ch[n][n];
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			cin>>ch[i][j];
		}
	}
	char dgnl = ch[0][0];
	int flag = 0;
	for(int i = 0; i<n; i++)
	{
		if(ch[i][i]!=dgnl)
		{
			cout<<"NO";
			return 0;
		}
	}
	int i = 0,j=n-1;
	while(i<n && j>=0)
	{
		if(ch[i][j]!=dgnl)
		{
			cout<<"NO";
			return 0;
		}
		i++;j--;
}
	int ptr1 = 0,ptr2=n-1;
	char othr = ch[0][1];
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			if(i==j)
			{
				continue;
			}
			else if(i==ptr1 && j== ptr2)
			{
				continue;
			}
			else
			{
				if(ch[i][j]!=othr || ch[i][j]==dgnl)
				{
					cout<<"NO";
					return 0;
				}
			}
		}
		ptr1++;ptr2--;
	}
	cout<<"YES";
	return 0;
}
