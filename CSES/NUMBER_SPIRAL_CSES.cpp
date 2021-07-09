#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int t,x,y,m,k;
    cin>>t;
    for(long long int i=0;i<t;i++){
        cin>>x>>y;
      if(x>=y){
        if(x%2==0){
            cout<<x*x-y+1<<endl;
        }
        else{
          cout<<(x-1)*(x-1)+y<<endl;
        }

    }
    else{
       if(y%2==0){
        cout<<(y-1)*(y-1)+x<<endl;
       }

        else{
            cout<<y*y-x+1<<endl;
        }



    }




    }
    return 0;
}
