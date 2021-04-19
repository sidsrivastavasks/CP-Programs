#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[100];
	cin>>s;
	long long i;
	long long l = strlen(s);
	for(i=0; i<l; i++)
	{
		if(s[i]=='.')
		{
			cout<<0;
		}
		else if(s[i]=='-' && s[i+1]=='.')
		{
			cout<<1;
			i++;
		}
		else
		{
			cout<<2;
			i++;
		}
	}
return 0;	
}
