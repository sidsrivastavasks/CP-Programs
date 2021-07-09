#include<stdio.h>
#include<math.h>
int a[20], count=0;
void print(int n)
 {
	int i,j;
	count++;
	printf("\n\nSolution %d:\n",count);
	for (i=1;i<=n;i++) 
	{
		for (j=1;j<=n;j++) 
		{
			if(a[i]==j)
			    printf("Q\t"); 
			else
			    printf("*\t");
		}
		printf("\n");
	}
}
int place(int i, int j)
{
	int k;
	for(k=1;k<=i-1;k++)
	{
		if(a[k]==j || abs(j-a[k])==abs(i-k))
		{
			return 0;
		}
		
	}
	return 1;
}
void nqueen(int i, int n)
{
	int j,f;
	for(j=1;j<=n;j++)
	{
		f=place(i,j);
		if(f==1)
		{
			a[i]=j;
			if(i==n)
			{
				print(n);
				break;
			}
			else
			{
				nqueen(i+1,n);
			}
		}
	}
}
int main()
{
	int i=1,n;
	printf("\nEnter the number of queens: ");
	scanf("%d",&n);
	nqueen(i,n);
	printf("\nTotal solutions=%d",count);
	return 0;
}
