#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		map<char,int> mp;
		if(s1.length()>s2.length())
		{
			string str;
			map<char,int> mp2;
			for(int i = 0; i<s2.length(); i++)
			{
				mp[s2[i]]++;
			}
			for(int i = 0; i<s1.length(); i++)
			{
				mp2[s1[i]]++;
			}
			int len = mp.size();
			if(mp.size()==1 && mp2.size()==1)
			{
				char ch = s2[0];
			int count = 1;
			str+=s2[0];
			int i = 1;
			while(count!=len)
			{
				
				if(ch!=s2[i]){
					ch = s2[i];
					count++;
				}
				str+=s2[i];
				i++;
			}
				int run = lcm(s1.length(),s2.length());
				run/=str.length();
				while(run--)
				{
					cout<<str;
				}
				cout<<endl;
			}
			else{
				//cout<<1<<endl;
			int len = mp.size();
			if(s1.length()%len==0){
				//cout<<"1"<<endl;
			bool ok = true;
			int j = 0;
			for(int i = 0; i<s1.length(); i++)
			{
				if(s2[j]!=s1[i])
				{
					ok = false;
					break;
				}
				
				if(j==s2.length()-1)
				{
					j = 0;
				}
				else
					j++;
					//cout<<"1"<<" ";
			
			}
			if(ok)
			{
				char ch = s2[0];
			int count = 1;
			str+=s2[0];
			int i = 1;
			while(count!=len)
			{
				
				if(ch!=s2[i]){
					ch = s2[i];
					count++;
				}
				str+=s2[i];
				i++;
			}
				int run = lcm(s1.length(),s2.length());
				run/=str.length();
				while(run--)
				{
					cout<<str;
				}
				cout<<endl;
			}
			else
			{
				cout<<"-1"<<endl;
			}
			}
			else
			{
				cout<<"-1"<<endl;
			}
		}
			//cout<<str;
		}
		else
		{
			string str;
			map<char,int> mp2;
			for(int i = 0; i<s1.length(); i++)
			{
				mp[s1[i]]++;
			}
			for(int i = 0; i<s2.length(); i++)
			{
				mp2[s2[i]]++;
			}
			int len = mp.size();
			if(mp.size()==1 && mp2.size()==1)
			{
				char ch = s2[0];
			int count = 1;
			str+=s2[0];
			int i = 1;
			while(count!=len)
			{
				
				if(ch!=s2[i]){
					ch = s2[i];
					count++;
				}
				str+=s2[i];
				i++;
			}
				int run = lcm(s1.length(),s2.length());
				run/=str.length();
				while(run--)
				{
					cout<<str;
				}
				cout<<endl;
			}
			else{
			int len = mp.size();
			if(s2.length()%len==0){
			bool ok = true;
			int j = 0;
			for(int i = 0; i<s2.length(); i++)
			{
				if(s1[j]!=s2[i])
				{
					ok = false;
					break;
				}
				
				if(j==s1.length()-1)
				{
					j = 0;
				}
				else
					j++;
					//cout<<"1"<<" ";
			
			
			}
			if(ok)
			{
				char ch = s2[0];
			int count = 1;
			str+=s2[0];
			int i = 1;
			while(count!=len)
			{
				
				if(ch!=s2[i]){
					ch = s2[i];
					count++;
				}
				str+=s2[i];
				i++;
			}
				int run = lcm(s1.length(),s2.length());
				run/=str.length();
				while(run--)
				{
					cout<<str;
				}
				cout<<endl;
			}
			else
			{
				cout<<"-1"<<endl;
			}
			}
			else
			{
				cout<<"-1"<<endl;
			}
		}
		}
	}
}
