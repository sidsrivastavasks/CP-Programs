#include<stdio.h>
#include<string.h>

int main()
{
	char s[100], t[100];
	
	int i,count =0, flag=0;
	scanf("%s",s);
	scanf("%s",t);
		
	int l = strlen(t);
	for(i = 0; i<l-1; i++){	   
  	if(s[i] != t[i])
   	{
   		flag=1;
   		break;
	}
	}
	if(flag==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}

return 0;	
}
