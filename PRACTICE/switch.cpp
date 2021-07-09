#include<stdio.h>
main()
{
int x;
printf("1 for addition , 2 for odd -even judgement , 3 for summation of first natural numbers");
scanf("%d",&x);
switch (x)
{
    case 1 : int a,b;
             printf("enter two numbers to be added");
             scanf("%d%d",&a,&b);
             printf("your result is %d", a+b);
                 break;
    case 2 : int c,d;
             printf("enter your number");
             scanf("%d",&c);
             d= c%2;
             if (d==1){printf("number is odd"); }
             else {printf("number is even");}
             break;
    case 3: int n,s;
            printf("enter the value of n ");
            scanf("%d",&x);
            s= n*(n+1)/2;
            printf("sum of first n terms are %d",s);
            break;

 }
}
