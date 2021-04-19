#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int k,i;
	char s[100];
	scanf("%d\n%s",&k,s);
	
	int l = strlen(s);
	if(k=l)
	{
		printf("%s",s);
	}
	else if(k!=l)
	{
		for(i=0; i<k; i++)
		{
			printf("%c",s[i]);
		}
		printf("...");
	}
	return 0;
}
