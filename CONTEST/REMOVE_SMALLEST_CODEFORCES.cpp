#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i<n; i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int flag = 0;
		for(int i = 0; i<n-1; i++)
		{
				if(abs(a[i]-a[i+1])>1)
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
