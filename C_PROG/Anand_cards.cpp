#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

int count_cards(int n)
{
int total=0, i, j;
for(i=1; i<=n; i++)
{
  for(j=0; j<i; j++)
  {
  	total+=2;
  }	
  for(j=0; j<i-1; j++)
  {
  	total += 1;
  }
}
return total;
}

int main()
{
	int n,  result;
	while(1)
	{
		scanf("%d",&n);
		if(n!=-1)
		{
			result=count_cards(n);
			printf("%d",result);
		}
		else if(n==-1)
		{
			exit(0);
		}
		else
		{
			printf("\n enter proper value: ");
		}
	}
	return 0;
}
