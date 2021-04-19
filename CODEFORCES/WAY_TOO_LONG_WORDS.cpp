#include <stdio.h>
#include<string.h>
int main() {
	int t;
	char s[100];
	scanf("%d",&t);
	for(int i = 0; i<=t; i++)
	{
	gets(s);
	int l = strlen(s);
	if(l>10)
	printf("%c%d%c\n",s[0],l-2,s[l-1]);
	else
	printf("%s\n",s);
	}
	return 0;
}

