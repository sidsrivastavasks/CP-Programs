#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int k,i;
	char s[100];
	scanf("%d",&k);
	scanf("%s",s);
	int l = strlen(s);
	if(l>k)
	{
		for(i=0; i<k; i++)
		{
			printf("%c",s[i]);
		}
		printf("...");
	}
	else{
	printf("%s",s);
}
	return 0;
}
