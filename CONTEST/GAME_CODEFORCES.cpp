#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int count,sum;
	char s[100];
	while(t--)
	{
		count = 0;
		sum = 0;
		cin>>s;
		int l = strlen(s);
		if(l%2!=0)
		{
			cout<<"NET"<<endl;
		}		
		else
		{
			for(int i=0; i<l; i++)
		{
			if(s[i]=='1')
			{
				count++;
			}
			else
			{
				sum++;
			}
			
		}
		if((s[0]=='0'&& s[1]=='0') || (s[0]=='1' && s[1]=='1'))
			{
				cout<<"NET"<<endl;
			}
		else if(sum==l || count==l)
		{
			cout<<"NET"<<endl;
		}
		else if(abs(count-sum)<=1)
		{
			cout<<"DA"<<endl;;
		}
		else
		{
			cout<<"NET"<<endl;
		}
}
	}
return 0;	
}
