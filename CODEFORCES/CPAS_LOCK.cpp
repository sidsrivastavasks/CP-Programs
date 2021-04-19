#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[100];
	gets(s);
	int i=1;
	s[0] = toupper(s[0]);
	printf("%c",s[0]);
	while(s[i]!='\0')
	{
		printf("%c",tolower(s[i]));	
		i++	;
	}
	return 0;
}
