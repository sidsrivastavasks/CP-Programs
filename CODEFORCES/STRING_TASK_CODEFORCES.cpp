#include<stdio.h>
#include<string.h>
#include<ctype.h>
int check_vowel(char ch)
{
	if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U' || ch == 'y' || ch == 'Y')
    {return 1;}
    else
    {return 0;}
}
int main()
{
	char str[101];
	int i;
	gets(str);
	for(i=0; str[i]!='\0'; i++)
	{
		if(check_vowel(str[i]) == 0)
		{
			char d = tolower(str[i]);
			printf(".%c",d);
		}
	}
	return 0;
}
