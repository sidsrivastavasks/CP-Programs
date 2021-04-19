#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    if(t==1)
    {
    	cout<<"3";
	}
	else if(t<=3)
	{
		cout<<"4";
	}
	else 
	{
		if(t%2==0)
		{
			cout<<"3";
		}
		else
		{
			cout<<"4";
		}
	}
}
