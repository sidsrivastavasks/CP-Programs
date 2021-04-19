#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,t,i,j,sum,count,m;
	cin>>t;
	while(t--)
	{
		sum =0;
		count =0;
		int l =0;j = 0;
		cin>>n>>x;
		int q = n;
		int a[n];
		for(i=0; i<n; i++)
		{
			cin>>a[i];
			sum+=a[i];
			if(a[i]==0)
			{
				count++;
			}
		}
		if(sum%x!=0)
		{
			cout<<n<<endl;
		}
		else if((n-count)!=1 && sum%x==0)
		{
			sort(a,a+n);
			while(q--)
			{
			sum = sum - a[l];
			l++;
			if(sum%x!=0)
			{
				cout<<n-l<<endl;
				break;
			}
			else
			{
				sum = sum+a[j];
				j++;
			}
			}
		}
		else
		{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
