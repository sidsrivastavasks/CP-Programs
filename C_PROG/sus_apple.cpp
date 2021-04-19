#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long minimum(long long a[],long long i,long long sum,long long total){
   if(i==0)
        return abs((total-sum)-sum);

return min(minimum(a,i-1,sum+a[i-1],total),
           minimum(a,i-1,sum,total));

}
long long finder(long long a[],long long n){
    long long total=0;
    for(long long i=0;i<n;i++)
        total+=a[i];

        return minimum(a,n,0,total);
}

int main()
{
    long long n;
    cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<finder(a,n);
    return 0;
}
