#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int i = ((a+b*c)>a*(b+c))? a+b*c : a*(b+c);
	int j = ((a*b*c)>(a+b)*c)? a*b*c : (a+b)*c;
	int res = (i>j)? i : j;
	int final = res>a+b+c? printf("%d",res) : printf("%d",a+b+c);
	return 0;
}
