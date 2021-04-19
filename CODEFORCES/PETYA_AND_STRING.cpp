#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str1,str2;
	cin>>str1>>str2;
	transform(str1.begin(),str1.end(),str1.begin(),::tolower);	
	transform(str2.begin(),str2.end(),str2.begin(),::tolower);	
	int len = str1.length();
	if(str1==str2)
	{
		cout<<"0"<<endl;
	}
	else if(str1<str2)
	{
		cout<<"-1"<<endl;
	}
	else 
	{
		cout<<"1"<<endl;
	}
	return 0;
}
