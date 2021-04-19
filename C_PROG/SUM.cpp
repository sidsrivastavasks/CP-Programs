#include <stdio.h>

int main(void) {
	int n;
	printf("ENTER ANY NUMBER : ");
	scanf("%d",&n);
	int sum = 0,i;
	for(i = 1; i<=n; i++)
	{
		sum+=i;
	}
	printf("sum is : %d",sum);
	return 0;
}
