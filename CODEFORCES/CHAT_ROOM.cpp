#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	gets(s);
	char s1[6] = {"hello"};
	int i=0,p=0,count = 0;
	while(s[p]!='\0')
	{
		if(s1[i]==s[p])
		{
		count++;
		i++;
		}
	p++;
	}
	if(count==5)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
