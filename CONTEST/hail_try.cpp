#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll closepoweroftwo(ll x)
{
	ll power = 1;
	while(power*2 <= x)
    	power*=2;
    return power;
}
ll pos(ll a[],ll n,ll x,ll i)
{
	ll maxj = 0,minj = ;
		for(int k = i+1; k<n; k++)
		{
			if(a[k]>=x)
			{
				return k;
			}
			else if(a[k]!=0)
			{
				minj = k;
			}
		}
		return minj;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n>>x;
		ll a[n];
		for(int k = 0; k<n; k++)
		{
			cin>>a[k];
		}
		ll i = 0,j = 1;
		ll temp = x;
		while(j!=n && x!=0)
		{
			if(a[i]==0)
			{
				if(i+1!=j)
				{
					i++;
				}
				else 
				{
					i++;j++;
				}
			}
			else 
			{
				ll p = closepoweroftwo(a[i]);
				j = pos(a,n,p,i);
				a[i] = a[i]^p;
				a[j] = a[j]^p;
				x--;
			}
		}
		ll ptr1 = n-2,ptr2 = n-1;
		for(int k = 0; k<n-1; k++)
		{
			if(a[k]!=0)
			{
				ptr1 = k;
				break;
			}
		}
		while(x>0 && a[ptr1]!=0)
		{
			ll valofnearest = closepoweroftwo(a[ptr1]);			//it will return nearest value of power of two
			a[ptr1] = a[ptr1]^valofnearest;						//this while loop i kept for the situation when j equals to n but pos1 is not at lenofarr-2th position				
			a[ptr2] = a[ptr2]^valofnearest;						//for example 0 1 0 0 3
			x--;
		}
		ptr1 = n-2;
		ptr2=n-1;
		if(x>0 && x%2!=0 || temp<n)
		{
				ll p = closepoweroftwo(a[ptr1]);
				a[ptr1] = a[ptr1]^p;
				a[ptr2] = a[ptr2]^p;
		}
		for(int k = 0; k<n; k++)	
		{
			cout<<a[k]<<" ";
		}
		cout<<endl;
	}
return 0;	
}
