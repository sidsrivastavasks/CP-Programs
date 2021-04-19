 #include<stdio.h>
 
 int main()
 {
 	int i,n,N,p;
 	printf("ENTER THE SIZE OF ARRAY :  ");
 	scanf("%d",&n);
 	printf("\nENTER %d ARRAY",n);
 	int arr[n];
 	for(i=0; i<n; i++)
 	{
 		printf("\nENTER ARRAY[%d] : ",i+1);
 		scanf("%d",&arr[i]);
	}
	printf("\nENTER THE NUMBER YOU WANT TO INSERT : ");
	scanf("%d",&N);
	printf("\nENTER THE POSITION : ");
	scanf("%d",&p);
	for(i=n-1; i>=p; i--)
	{
		arr[i+1]=arr[i];
	}
	arr[p]= N;
	for(i=0; i<n+1; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
 }
