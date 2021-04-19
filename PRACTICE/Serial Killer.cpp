#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	cout<<s1<<" "<<s2<<endl;
	int n;
	cin>>n;
	while(n--)
	{
		string str1,str2;
		cin>>str1>>str2;
		if(str1==s1)
		{
			s1 = str2;
		}
		else 
		{
			s2 = str2;
		}
		cout<<s1<<" "<<s2<<endl;
	}
}
