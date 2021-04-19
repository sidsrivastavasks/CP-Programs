#include <bits/stdc++.h>
using namespace std;
int solve(int arr[],int n, int sum)
{
		int res = 0;
		for(int i = 0; i<n; i++)
			{
				for(int j = i+1; j<n; j++)
				{
					if(arr[i]+arr[j]==sum)
					{
						res++;
						arr[i] = 1e8;
						arr[j] = 1e8;
					}
				}
			}
	return res;			
}
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
		int mina = a[0]+a[1];
		int maxa = a[n-1]+a[n-2];
		int moves = 0;
		for(int i = mina; i<=maxa; i++)
		{
			int c = solve(a,n,i);
			moves = max(moves,c);
		}
		cout<<moves<<endl;
	}
	return 0;
}
