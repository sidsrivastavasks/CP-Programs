#include<iostream>
#include<bits/stdc++.h>

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
	
	    long long int midval = (low+(high-low)/2);
	    cout<<midval<<endl;
		cin>>c;
		if(c == 'E')
		{
		    break;
		}
		else if(c == 'G')
		{
			cout<<midval<<endl;
			cin>>c;
			if(c =='G')
			{
				low = midval+1;
			midval = low+(high-low)/2;
			}
			else
			{
				cout<<midval<<endl;
				cin>>c;
				if(c =='L')
				{
					high = midval-1;
				midval = low+(high-low)/2;
				}
			}
			
		}
		else 
		{
			cout<<midval<<endl;
			cin>>c;
			if(c =='L')
			{
				high = midval-1;
				midval = low+(high-low)/2;
			}
			else
			{
				cout<<midval<<endl;
				cin>>c;
				if(c=='G')
				{
					low = midval+1;
				midval = low+(high-low)/2;
				}
			}
		}
	}
	
return 0;	
}
