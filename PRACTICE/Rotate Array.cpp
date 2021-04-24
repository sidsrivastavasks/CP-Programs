#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--){
	    ll n,d;
	    cin>>n>>d;
	    queue<int> a;
	    for(int i = 0; i<n; i++){
	        int pp;
	        cin>>pp;
	        a.push(pp);
	    }
	    
	    //int i = 0;
	    while(d--){
	        a.push(a.front());
	        a.pop();
	    }
	    
	    while (!a.empty()) {
            cout << a.front()<<" ";
            a.pop();
        }
	    cout<<endl;
	}
	return 0;
}
