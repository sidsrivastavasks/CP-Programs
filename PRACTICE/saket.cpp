#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007
bool isPerfectSquare(ll x) 
{ 
    long long s = sqrt(x); 
    return (s*s == x); 
} 
bool isFibonacci(ll n) 
{ 
	return isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n - 4); 
} 
ll gcd(ll a, ll b)
{
    // Everything divides 0 
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b)%M;
    return gcd(a, b-a)%M;
}
int main(){
	ll a,b;
	cin>>a>>b;
	cout<<gcd(a,b)%M;
}
