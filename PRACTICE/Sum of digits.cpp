#include<bits/stdc++.h>
#include<string>  
using namespace std;
int main()
{
	string n,str;
	cin>>n;
	int count = 0,k=0;
	str = n;
	while(str.length()>1)
	{
		
		for(int i = 0; i<str.length(); i++)
		{
			k+=str[i]-'0';
		}
		count++;
		str =  to_string(k);
		k = 0;
		//cout<<str<<endl;
	}
	cout<<count;
	return 0;
}
