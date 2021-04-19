#include<stdio.h>
#include<string.h>

int main()
{
	long long int i,t,count,flag;
	char s[100000];
	scanf("%lld",&t);
	while(t--)
	{

		scanf("%s",s);
		count = 0;
		flag = 0;
		i=0;
		long long int l = strlen(s);
		while(s[i]!='\0')
		{
			if((s[i] == 'x' && s[i+1] == 'y'))
			{
				count++;
				flag = 1;
				i = i+2;
			}
			else if((s[i] == 'y' && s[i+1] == 'x'))
			{
				count++;
				flag = 1;
				i = i+2;
			}
			else
			{
			i++;}
		}
		if(flag == 1)
		{
			printf("%lld\n",count);
		}
		else
		{
			printf("0\n");
		}	
	}
	return 0;
}
