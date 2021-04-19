#include <iostream>
using namespace std;

int main() {
	string s1,s2;
	cin>>s1>>s2;
	bool ok = true;
	int n  = s1.length();
	//cout<<n<<endl;
	for(int i = 0; i<n; i++){
		//cout<<s1[i]<<" "<<s2[n-i-1]<<endl;
		if(s1[i]!=s2[n-i-1]){
			ok = false;
			break;
		}
	}
	if(ok){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
