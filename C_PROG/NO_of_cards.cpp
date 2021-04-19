#include<stdio.h>
#include<math.h>

int main()
{
	int n,i,res;
	int sum=0;
	while(1)
	{
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
	   sum+= (n-i);	
	}
    res= (n*(n+1) + sum); 
  
	 printf("%d",res);
    }
    
  return 0;	
}
