#include<bits/stdc++.h>
using namespace std;
bool check(int a[], int n, int cst){
	int cost = 0;
	int ptr2 = 1;
	for(int i = 0; i<n-1; i++)	
	{
		ptr2 = i;
		int mina = a[i];
		for(int j = i; j<n; j++){
			if(a[j]<mina){
				mina = a[j];
				ptr2 = j;
			}
		}
		int run = (ptr2-i)+1;
		for(int k = 0; k<run/2; k++){
			swap(a[k+i],a[ptr2-k]);
		}
		cost+= (ptr2-i)+1;		
	}
	if(cost==cst){
		return true;	
	}
return false;
}
void display(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << a[i] << "  ";
    }
    cout << endl;
}
int main(){
	int t;
	cin>>t;
	int tt = 1;
	while(t--){
		int n,cst;
		cin>>n>>cst;
		int a[n+1];
		int k = n;
		for(int i = 0; i<n; i++){
			a[i] = k+1;
			k--;
		}
    	bool ok = false;
    	//cout<<"1"<<endl;
    	do {
    		//cout<<"2"<<endl;
        	if(check(a,n,cst)){
        		ok = true;
        		break;
			}
    	} while(next_permutation(a, a + n));
    	
		cout<<"Case #"<<tt<<": ";
		if(ok){
			for(int i = 0; i<n; i++){
				cout<<a[i]<<" ";
			}
			cout<<"\n";
		}
		else{
			cout<<"IMPOSSIBLE"<<"\n";
		}
		tt++;
	}
	return 0;
}
