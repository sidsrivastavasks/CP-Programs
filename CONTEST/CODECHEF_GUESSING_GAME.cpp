#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	char c;
	cin>>n;
	int lowi = 1; 
	int highi = n;
	int lowf = 1; int highf = n;
	while(lowi<=highi)
	{
		int mid = (lowi+(highi-lowi)/2);
		cout<<mid<<endl;
		cin>>c;
		if(c == 'E')
		{
			exit(0);
		}
		else if(c == 'G')
		{
			lowi = mid+1;
		}
		else
		{
			highi = mid-1;
		}
		mid = (lowi+(highi-lowi)/2);
		cout<<mid<<endl;
		cin>>c;
		if(c =='E')
		{
			exit(0);
		}
	}
	while(lowf<=highf)
	{
		int midf = (lowf+(highf-lowf)/2);
		cout<<midf<<endl;
		cin>>c;
		if(c == 'E')
		{
			exit(0);
		}
		midf = (lowf+(highf-lowf)/2);
		cout<<midf<<endl;
		cin>>c;
		if(c=='E')
		{
			exit(0);
		}
		if(c == 'G')
		{
			lowf = midf+1;
		}
		else 
		{
			highf = midf-1;
		}
	}
return 0;	
}
