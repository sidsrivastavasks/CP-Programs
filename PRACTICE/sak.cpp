#include <bits/stdc++.h>
using namespace std;
int main()
{

     long long t,n,m,x,a,b,c,i=0;
     cin>>t;
     int arr[t+1];
    while(t>0)
    {
        cin>>n>>m>>x;
        a=x/n;
        b=x%n;
        c=m*(b-1);
        c+=a+1;
        arr[i]=c;
        i++;
        t--;
    }
    for(i=0;i<t;i++)
        {
            cout<<arr[i];
        }

    return 0;
}
