#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		ll n = s.length();
		bool ok = false,okk=false;
		ll cnt = 0,ans=0,pos1 = 0,pos2 = 0,bpos1=0,bpos2=0,i=0;
		while(cnt!=n)
		{
			if(s[i]=='(')
			{
				if(ok==false)
				{
					ok = true;
					pos1 = i;	
				}
				else if(ok==true && i==n)
				{
					s[i] = '0';
					cnt=0;
					i = 0;
				}
			}
			else if(s[i]==')')
			{
				if(ok==true)
				{
					ans++;
					pos2 = i;
					i = -1;
					cnt = 0;
					ok = false;
					s[pos1]='0';
					s[pos2]='0';
				}
				else if(ok==false)
				{
					s[i]='0';
					cnt=0;
					i = 0;
				}
			}
			else if(s[i]=='[')
			{
				if(okk==false)
				{
					okk = true;
					bpos1 = i;
				}
				else if(okk == true && i==n)
				{
					s[i]='0';
				}
			}
			else if(s[i]==']')
			{
				if(okk==true)
				{
					ans++;
					bpos2 = i;
					i =-1;
					cnt = 0;
					okk = false;
					s[bpos1]='0';
					s[bpos2] = '0';
				}
				else if(okk == false)
				{
					s[i] ='0';
					cnt=0;
					i = 0;
				}
			}
			else
			{
				cnt++;
			}
			i++;
		}
		cout<<ans<<endl;		
	}
	return 0;
}
