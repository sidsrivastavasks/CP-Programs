#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num){
    bool flag=true;
    if(num==1)return false;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
int main()
{
	int n;
	cin>>n;
	if(isPrime(n) && n<7)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
