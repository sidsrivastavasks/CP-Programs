#include<stdio.h>

int main()
{
    int n,i,max=0,sum=0;
     scanf("%d",&n);
     int arr[n];
     max=0;
     for(i=0; i<n; i++)
     {
     	scanf("%d",&arr[i]);
	 }
     for(i=0;i<n;i++)
     {
        if(max<arr[i])
        {
            max=arr[i];
        }
       
     }
       
 
    
     for(i=0;i<n;i++)
     {   
        if(arr[i]==max)
        {
            sum++;
        }
     }
      
     

    printf("%d",sum);

    return 0;
}
