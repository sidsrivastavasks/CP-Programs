#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,p,q;
	cin>>n;
	int a[n];
	cin>>p;
	for(int i = 1; i<=n; i++){
	 a[i] = 0;
	 }
	for(int i = 1; i<=p; i++)
	{
		int k;
		cin>>k;
		a[k]++;
	}
	cin>>q;
	for(int i = 1; i<=q; i++)
	{
		int k;
		cin>>k;
		a[k]++;
	}
	for(int i = 1; i<=n; i++)
	{
		if(a[i]==0)
		{
			cout<<"Oh, my keyboard!";
			return 0;
		}
	}
	cout<<"I become the guy.";
	return 0;
}
