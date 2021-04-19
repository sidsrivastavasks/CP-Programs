#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int n,i;
	int res=0;
   for(i=0; i<100; i++)
	{
	  scanf("%d",&n);
	  if(n!=0)
	  {
		res= ((n*(n+1)*(2*n+1))/6);
	    printf("%d\n",res);  
      }
      else
      {
		  exit(0);
	  }
	  
    }
	
	return 0;
}
