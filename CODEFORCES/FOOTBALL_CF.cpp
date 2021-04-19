#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,count = 0,k,res = 0,j;
	scanf("%d",&n);
	char s[100];
	for(i=0; i<n; i++)
	{
		scanf("%s",s[i]);
	}
	for(i=0; i<n; i++)
	{
		if(s[i]==s[i+1])
		{
			count++;
			j=i;
		}
		else
		{
			res++;
			k = i;
		}
	}
	int p = (count>res)? printf("%s",s[j]) : printf("%s",s[k]);
return 0;	
}
