#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,t,r,l1,l;
	cin>>t;
	char s[100];
	while(t--)
	{
		int count = 0;l1=0;r=0;
		cin>>s;
		int l = strlen(s);
		for(i=0; i<=l; i++)
		{
			if(s[i]=='1')
			{
				l1 = i;
				break;
			}
		}
		for(i=l; i>=0; i--)
		{
			if(s[i]=='1')
			{
				r = i;
				break;
			}
		}
		if(l1!=r){
		for(i=l1; i<=r; i++)
		{
			if(s[i]=='0')
			{
				count++;
			}
		}
		}
		cout<<count<<endl;
	}
return 0;	
}
