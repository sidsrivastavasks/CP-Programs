#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define mp make_pair
bool isPerfectSquare(int n)
{
    
    int sr = sqrt(n); 

    if (sr * sr == n)
        return true;
    else
        return false;
}
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		bool ok = false;
		for(int i = 0; i<n; i++){
			cin>>a[i];
		}
		for(int i = 0; i<n; i++){
			if(!isPerfectSquare(a[i])){
				ok = true;
				break;
			}
		}
		if(ok){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
