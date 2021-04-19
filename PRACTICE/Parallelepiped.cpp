#include<bits/stdc++.h>
using namespace std;
int main(){
	int s1,s2,s3;
	cin>>s1>>s2>>s3;
	int a = sqrt(s1*s2/s3),b = sqrt(((s2*s3)/s1)), c= sqrt(((s3*s1)/s2));
	cout<<4*(a+b+c);
}
