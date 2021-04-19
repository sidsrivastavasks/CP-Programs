#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
   if(isupper(s[0])){
        int flag = 0;
    for(int i=1;i<n;i++){
        if(!isupper(s[i])){
            flag=1;
            break;
        }
    }
    if(flag==1)cout<<s;
    else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s;

    }
   }
   else{
    int flag = 0;
    for(int i=1;i<n;i++){
        if(!isupper(s[i])){
            flag=1;
            break;
        }
    }
    if(flag==1)cout<<s;
    else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        char ch = toupper(s[0]);
        s[0]=ch;
    cout<<s;
    }



   }


    return 0;
}
