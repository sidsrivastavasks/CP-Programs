#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll n;
	cin>>n;
	
	if(n>=0)
		cout<<n;
	else
	{
		string s = to_string(n);
	
		if(n==-10)
			cout<<"0";
		else
		{

			if(s[s.length() -1] <s[s.length() - 2])
				cout<<(n/100)*10 + n%10;
			else
				cout<<n/10;
		}
	}
}
