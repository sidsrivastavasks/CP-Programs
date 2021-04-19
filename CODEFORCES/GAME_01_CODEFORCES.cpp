#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int i,n;
	cin>>n;
	char s[100];
	while(n--)
	{
		int o=0,z=0;
		cin>>s;
		int l = strlen(s);
		for(i=0; i<l; i++)
		{
			if(s[i]=='1')
			{
				o++;
			}
			else
			{
				z++;
			}
		}
		int m = min(o,z);
		if(m%2==0)
		{
			cout<<"NET"<<endl;
		}
		else
		{
			cout<<"DA"<<endl;
		}
	}
return 0;	
}
