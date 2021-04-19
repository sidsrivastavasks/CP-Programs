#include<stdio.h>
#include<math.h>
int main()
{
	int t,i,x=0,y=0,z=0,x1,y1,z1;
	scanf("%d",&t);
	for(i=0; i<t; i++)
	{
		scanf("%d%d%d",&x1,&y1,&z1);
		x+=x1;
		y+=y1;
		z+=z1;
	}
	if(x==0 && z==0 && y==0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
