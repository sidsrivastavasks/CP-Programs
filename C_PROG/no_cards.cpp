#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int n,i,res;
	int sum=0;
	while(1)
	{
	scanf("%d",&n);
	if(n!=-1)
	{
	
	for(i=1; i<=n; i++)
	{
	   sum+= (n-i);	
	   res= n*(n+1) + sum;
	   break;
	}
	printf("%d", res);
   }
   else
   {
   	exit(0);
   }
   
   }
    
  return 0;	
}
