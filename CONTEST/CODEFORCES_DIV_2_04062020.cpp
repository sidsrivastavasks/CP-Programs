#include<stdio.h>
#include<math.h>

int div(int c, int d)
{
	int res = c;
	int count = 0;
	while(res!=d)
		{
			if(c>=d)
			{
				if((res/d) == 2 || (res/d) == 4 || (res/d) == 8)
				{
					count++;
				}
				res = res/d;
			}
			else if(c<d)
			{
				if((d/res) == 2 || (d/res) == 4 || (d/res) == 8)
				{
					count++;
				}
				res = d/res;
			}
		}
return count;		
}
int main()
{
	int t,a,b,final;
	scanf("%d",&t);
	while(t--)
	{
		final = 0;
		scanf("%d%d",&a,&b);
		final = div(a,b);
		printf("%d\n",final);
	}
return 0;
}
