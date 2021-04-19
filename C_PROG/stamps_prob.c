#include<stdio.h>

int main()
{
	int sen,i,f=0,d,a;
	int friend[f];
	printf("Enter the no. of senario: ");
	scanf("%d",&sen);
	int stamps,count;
	for(i=0; i<sen; i++)
	{
		printf("\nEnter no. of stamps for senario %d : ",i+1);
		scanf("%d",&stamps);
		printf("\nEnter the number of friends : ");
		scanf("%d",&f);
		for(count=0; count<f; count++)
		{
		
		printf("\nEnter stamp no. %d: ",count+1 );
		scanf("%d", &friend[count]);
		
	    }
		
	}
	for (count=0;count<f-1;++count)
	{	
	  for (d=count+1;d<f;d++)
		{
			if (friend[count]<friend[d])
			{	a=friend[count];
				friend[count]=friend[d];
				friend[d]=a;
			}
	}       }
		for (count=0;count<f;++count)
	{	
	   printf ("%d\t",friend[count]);
	}
return 0;		

}
