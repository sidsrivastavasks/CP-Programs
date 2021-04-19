#include<bits/stdc++.h>
using namespace std;

int main() 
{
 int n,l,r,L1,R1;
 char x;
 cin>>n;
 int q=300;
 l=1;L1=1;
 r=n;R1=n;
 while(l<=r){
  int m=l+(r-l)/2;
  cout<<m<<endl;
  cin>>x;
   if(x=='E')
    return 0; 
    if (x=='G') 
	l = m + 1; 
    else
    r = m - 1;
    m=l+(r-l)/2; 
    cout<<m<<endl;
   cin>>x;
   if(x=='E')
             return 0; 
  }
  while(L1<=R1){
   int m1=L1+(R1-L1)/2;
            cout<<m1<<endl;
            cin>>x;
            if(x=='E')
             return 0;
            m1=L1+(R1-L1)/2;
            cout<<m1<<endl;
            cin>>x;
            if(x=='E')
             return 0; 
         if (x=='G') 
             L1 = m1 + 1; 
         else
             R1 = m1 - 1;
  } 
 return 0;
}
