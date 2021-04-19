#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[100];
	int i;
	scanf("%s",s);
	int l = strlen(s);
	if(isupper(s[0]))
	{
		int flag = 0;
		for(i=1; i<l; i++)
		{
			if(!isupper(s[i]))
			{
				flag = 1;
				break;
			}
		}
		if(flag == 1)
		{
			printf("%s",s);
		}
		else
		{
			for(i=0; i<l; i++)
			{
				printf("%c",tolower(s[i]));
			}
			
		}
	}
	else
	{
		int flag = 0;
		for(i=1; i<l; i++)
		{
			if(!isupper(s[i]))
			{
				flag = 1;
				break;
			}
		}
		if(flag == 1)
		{
			printf("%s",s);
		}
		else
		{
			printf("%c",toupper(s[0]));
			for(i=1; i<l; i++)
			{
				printf("%c",tolower(s[i]));
			}
			
		}		
	}
	return 0;
}
