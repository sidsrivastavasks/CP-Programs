#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int n; //number of cities;
	cin>>n;
	int a,b;
	cin>>a>>b;
	
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	
//final ans , min;
	int cur=0;//current no of 0;
	int first_one=-1,last_one;
	for(int i=0;i<n;i++){
		if(arr[i]==1){
			first_one=i;
			break;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(arr[i]==1){
			last_one=i;
			break;
		}
	}
	bool kk=true;
	int blocks=1;
//out<<first_one<<" "<<last_one<<endl;
	for(int i=first_one+1;i<=last_one;i++){
		if(arr[i]==1){
			if(kk)continue;
			else {
				blocks++;
				kk=true;
			}
		}
		else{
			kk=false;
		}
	}
		int ans=blocks*a;
	//	cout<<blocks<<endl;
	bool ok =true;
	//ok(true)last element was one
	//ok(false)last element was zero
	for(int i=first_one+1;i<=last_one;i++){
		if(arr[i]==1){
			if(ok==true)continue;
			else{
				//cur is size of zero;
				if(b*cur<a){
					ans-=a;
					ans+=b*cur;
				}
				ok=true;
				
			}
		}
		else{
			if(ok==true){
				cur=1;
				ok=false;
			}
			else{
				cur++;
				ok=false;	
			}
		}
	}
	cout<<ans;
	
	
	
	
	return 0;
}
