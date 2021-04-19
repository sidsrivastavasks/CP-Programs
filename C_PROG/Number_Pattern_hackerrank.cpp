#include <iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
using ll = long long;
int main()
{

    ll r,c,xc,yc;
    cin>>r>>c>>xc>>yc;
    ll matrix[r][c];
    matrix[xc][yc]=0;
    ll temp;
    temp=0;


  for(ll i=0;i<r;i++){
    for(ll j=0;j<c;j++){
        matrix[i][j]=max(abs(i-xc),abs(j-yc));
    	}
	}

       for(ll i=0;i<r;i++){
    for(ll j=0;j<c;j++){
       cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
