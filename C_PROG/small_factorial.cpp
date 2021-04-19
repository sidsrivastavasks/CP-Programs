#include<stdio.h>
#include<math.h>
int main()
{
    int a[200],n,size,carry,i,j,t;
    scanf("%d",&t);
    for(j=0; j<t; j++)
    {
    scanf("%d",&n);
    a[0]=1;
    size=0;
    for(i=3; n>=2; n--)
    {
        carry=0;
        for(i=0; i<=size; i++)
        {
            carry=(a[i]*n)+carry;
            a[i]=carry%10;
            carry=carry/10;
        }
        while(carry)
        {
            a[++size]=carry%10;
            carry=carry/10;
        }
    }
    for(i=size; i>=0; i--)
        printf("%d",a[i]);
        printf("\n");
}


    return 0;
}
