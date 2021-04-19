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
		long long a[n];
		for(int i = 0; i<n; i++)
		{
			cin>>a[i];
		}
		long long pairs = 0,check = 0;
		for(int i = 0; i<n; i++)
		{
			for(int j = i+1; j<n; j++)
			{
				check = a[i]^a[j];
				if(check>a[i] && check>a[j])
				{
					pairs++;
				}
			}
		}
		cout<<pairs<<endl;
	}
}
