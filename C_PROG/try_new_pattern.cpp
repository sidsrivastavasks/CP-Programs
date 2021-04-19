#include<stdio.h>

int main()
{
	int i,j,sp,n;
	printf("enter: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	 {
	 
	 	for(sp=1; sp<=n-i; sp++)
	 	{
	 		printf(" ");
		}
 	    
	 	for(j=1; j<n; j++)
	 	{
	 		printf(" ");
		}
 	    for(j=1; j<=(2*i)-1; j++)
	    {
	    	if(j==1 || j==((2*i)-1))
	    	{
			 printf("*");
 	 	    }
 	 	  else
 	 	    {
 	 	  	  printf(" ");
		    }
		}
		printf("\n");
     }
}
