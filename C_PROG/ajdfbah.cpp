#include<bits/stdc++.h>
using namespace std;
#define ll long long
int div(int n){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(n%i==0)cnt++;
	}
	return cnt;
}

int main()
{
	
	int ans=0;
	for(int i=1;;i++){
		if(i%2==0){
			int p=div(i/2);
			int q=div(i+1);
			 ans=p*q;
			
		}
		else{
			int p=div((i+1)/2);
			int q=div(i);
			 ans=p*q;
		}
		if(ans>500){
			cout<<(i*(i+1))/2;
			break;
		}
	}
	
	
	
	
	
	return 0;
}
