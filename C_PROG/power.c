#include<stdio.h>

int main()
{
	char s;
	scanf("%c",&s);
    int l= s.length();
	for(i=0; i<l/2; i++)
	{
		if(s[i]!=s[l-1-i])
		printf("NO");
		break;	
	
		
	} 
	printf("YES");
return 0;	
}
