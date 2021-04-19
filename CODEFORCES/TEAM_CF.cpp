#include<stdio.h>
#include<math.h>

int main()
{
	int n,x,y,z,count=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d%d",&x,&y,&z);
		int i = (x==1 && y==1)? count++ : (x==1 && z==1)? count++ : (y==1 && x==1)? count++ : (y==1 && z==1)? count++ : (z==1 && x==1)? count++ :	(z==1 && y==1)? count++ : (x==1 && y==1 && z==1)? count++ : 0;
	}
	printf("%d",count);  
	return 0;
}
