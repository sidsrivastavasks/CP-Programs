#include<stdio.h>
#include<math.h>
long long int exponentMod(long long int A, long long int B) 
{ 
    if (A == 0) 
        return 0; 
    if (B == 0) 
        return 1; 
        
    long long int y; 
    if (B % 2 == 0) { 
        y = exponentMod(A, B / 2); 
        y = (y * y) % 10; 
    }  
    else { 
        y = ((A%10) * exponentMod(A, B - 1) % 10) % 10; 
    } 
  
    return (int)((y + 10) % 10); 
} 
int main()
{
	long long int i,t,v1,v2;
		scanf("%lld%lld",&v1,&v2);
		
		printf("%lld\n",exponentMod(v1,v2));
	return 0;
}
