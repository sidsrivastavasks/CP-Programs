#include<stdio.h>

int main()
{
	int row, sp, p, num, n;
	printf("ENTER THE NUMBER OF ROWS: ");
	scanf("%d",&num);
	n=num;
	
	 for(row=1; row<=num; row++)
	 {
	 	for(sp=1; sp<=n; sp++)
	 	{
	 		printf(" ");
		}
		n--;
		for(p=1; p<=row; p++)
		{
			printf("%d ",row);
		}
	   printf("\n");
	 }
	 return 0;
}
