#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
	long long int t,n,p,i,j,k,x;
	cin>>t;
	while(t--)
	{
		cin>>n>>p;
		int a[61][61];
		for(i=0; i<61; i++)
		{
			for(j=0; j<61; j++)
			{
				a[i][j] = 0;
			}
		}
		for(i=1; i<=n; i++)
		{
			for(j=1; j<=n; j++)
			{
				cout<<1<<" "<<i<<" "<<j<<" "<<i<<" "<<j<<endl;
				cin>>x;
				if(x==1)
				{
					a[i][j] = 1;
				}
				else if(x==-1)
				{
					exit(0);
				}
	
			}
		}
		cout<<2<<endl;
		for(i=1; i<=n; i++)
		{
			for(j=1; j<=n; j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		cin>>x;
		if(x==-1)
		{
			exit(0);
		}
	}
return 0;	
}
