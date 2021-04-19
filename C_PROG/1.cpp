#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int arr[a],brr[b];
		for(int i = 0; i<a; i++)
		{
			cin>>arr[i];
		}
		for(int i = 0; i<b; i++)
		{
			cin>>brr[i];
		}
		int ans = 0;
		for(int i = 0; i<a; i++)
		{
			for(int j = 0; j<b; j++)
			{
				if(arr[i]==brr[j])
				{
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;	
}
