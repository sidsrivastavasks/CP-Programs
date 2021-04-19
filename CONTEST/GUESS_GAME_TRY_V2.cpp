#include<iostream>
#include<bits/stdc++.h>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	
	long long int low = 1; 
	long long int high = n;
	char c;
	
	while(low<=high)
	{
	
	    long long int mid = (low+(high-low)/2);
	    cout<<mid<<endl;
	    fflush(stdout);
		cin>>c;
		if(c == 'E')
		{
		    exit(0);
		}
		else if(c == 'G')
		{
			cout<<mid<<endl;
			fflush(stdout);
			cin>>c;
			if(c=='G')
			{
				low = mid+1;
			mid = low+(high-low)/2;
			}
			else
			{
				cout<<mid<<endl;
				fflush(stdout);
				cin>>c;
				if(c =='L')
				{
					high = mid-1;
				mid = low+(high-low)/2;
				}
			}
			
		}
		else 
		{
			cout<<mid<<endl;
			fflush(stdout);
			cin>>c;
			if(c =='L')
			{
				high = mid-1;
				mid = low+(high-low)/2;
			}
			else
			{
				cout<<mid<<endl;
				fflush(stdout);
				cin>>c;
				if(c=='G')
				{
					low = mid+1;
				mid = low+(high-low)/2;
				}
			}
		}
	}
return 0;
}
