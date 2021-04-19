#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[100], s1[100];
	
	int i,count =0, flag=0;
	cin>>s;
	cin>>s1;
		
	int l = strlen(s1);
	for(i = 0; i<l-1; i++){	   
  	if(s[i] != s1[i])
   	{
   		flag=1;
   		break;
	}
	}
	if(flag==0)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}

return 0;	
}
