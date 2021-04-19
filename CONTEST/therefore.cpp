#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int res = n%10;
	if(res == 2 || res == 4 || res == 5 || res == 7 || res == 9)
	{
		printf("hon");
	}
	else if(res == 0 || res == 1 || res == 6 || res == 8)
	{
		printf("pon");
	}
	else
	{
		printf("bon");
	}
	return 0;
}
