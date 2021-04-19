#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
    int n;
    cin>>n;
    int sum=0;


    for(int i=n;i>0;i=i/10){
        sum=sum+i%10;
    }


    while(n>0){
        int k=n%10;
        sum=sum+k;
        n=n/10;
    }
cout<<sum<<endl;
}
return 0;
}
