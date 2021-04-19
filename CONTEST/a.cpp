#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back()
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		int a[n];
		for(int i = 0; i<n; i++){
			cin>>a[i];
		}
		sort(a,a+n);
		bool ok = true;
		for(int i = 0; i<n; i++)
		{
			if(a[i]>d)
			{
				if(i>=2)
				{
					if(a[0]+a[1]>d)
					{
						ok = false;
					}
				}
				else
				{
					ok = false;
				}
			}
		}
		if(ok)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
