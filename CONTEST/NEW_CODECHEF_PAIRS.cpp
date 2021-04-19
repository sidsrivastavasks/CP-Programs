#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	long long int i,t,count,flag;
	char s[100000];
	cin>>t;
	while(t--)
	{

		cin>>s;
		count = 0;
		i=0;
		while(s[i]!='\0')
		{
			if((s[i] == 'x' && s[i+1] == 'y'))
			{
				count++;
				i = i+2;
			}
			else if((s[i] == 'y' && s[i+1] == 'x'))
			{
				count++;
				i = i+2;
			}
			else
			{
			i++;}
		}
		cout<<count<<endl;
	}
	return 0;
}
