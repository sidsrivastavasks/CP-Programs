#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string str = "";
	int i = 0;bool ok = false;
	while(i<s.length()-3)
	{
		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
		{
			i+=3;
			if(ok)
			{
				str+=" ";
				ok = false;
			}
		}
		else
		{
			str+=s[i];
			i++;
			ok = true;
		}
	}
	if(s[s.length()-3]!='W' && s[s.length()-2]!='U' && s[s.length()-1]!='B')
	{
		//if(s[length])
		str+=s[s.length()-3];
		str+=s[s.length()-2];
		str+=s[s.length()-1];
	}
	//else if()
	cout<<str;
}
