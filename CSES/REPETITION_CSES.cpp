#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
	string s;
	cin>>s;
	long long int len = s.length();
	long long int maximum=1;
	long long int k =1;
	char c = s[0];
	long long int i;
	for(i=1; i<len; i++)
	{
		if(s[i]==c)
		k++;
		else
		{
			maximum = max(maximum,k);
			c=s[i];
			k=1;
		}	
	}
	cout<<max(maximum,k);
	return 0;
}
