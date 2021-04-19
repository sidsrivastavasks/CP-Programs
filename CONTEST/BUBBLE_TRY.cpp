#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sort(int a[],int n)
{
	int count = 0,i;
	int swapped = true;
	while(swapped!=false)
	{
	
			swapped = false;
			count = count+1;
			for(i=1; i<=n-1; i++)
			{
				
					if(a[i]>a[i+1])
					{
						swap(a[i],a[i+1]);
						swapped = true;
					}
			
			}		
	}
return count;	
}
int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	int res = sort(a,n);
	cout<<res;
return 0;	
}
