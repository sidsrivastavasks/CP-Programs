#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char s[100000];
    int temp,temp2;
    while(t--)
    {
        int a=1;
        scanf("%s",&s);
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]=='1')
            {
                temp=i;
                break;
            }
            else temp=0;
        }
        for(int i=strlen(s)-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                temp2=i;
                break;
            }
            else temp2=0;
        }
        for(int i=temp;i<=temp2;i++)
        {
            if(s[i]=='0')
            {
                a=0;
                break;
            }
        }
        if(temp==0 && temp2==0)a=0;
        if(a==0)printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
