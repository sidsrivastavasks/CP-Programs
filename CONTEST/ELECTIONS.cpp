#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a=0,b=0,dash=0;
	long long n;
	cin>>n;
	string s;
	cin>>s;
	bool oka = false,okb=false;
	for(int i = 0; i<n; i++)
	{
		if(s[i]=='-')
		{
			dash++;
		}
		else if(s[i]=='A')
		{
			a++;
			if(okb)
			{
				if(dash%2==0)
				{
					a+=dash/2;
					b+=dash/2;
				}
				else
				{
					a+=(dash-1)/2;
					b+=(dash-1)/2;
				}
				dash = 0;
			}
			else if(dash>0)
			{
				a+=dash;
				dash = 0;
			}
			oka = true;
			okb = false;
		}
		else
		{
			b++;
			if(okb)
			{
				b+=dash;
				dash = 0;
			}
			else if(oka)
			{
				dash = 0;
			}
			okb=true;
			oka=false;
		}
	}
	//cout<<a<<" "<<b;
	if(a>b)
	{
		cout<<"A";
	}
	else if(b>a)
	{
		cout<<"B";
	}
	else
	{
		cout<<"Coalition government";
	}
	return 0;
}
