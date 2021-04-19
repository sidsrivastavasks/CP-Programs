#include <bits/stdc++.h>
using namespace std;
#define ll long long
#include <bits/stdc++.h> 
using namespace std; 
bool isPrime(ll n)  
{  
    // Corner cases  
    if (n <= 1)  return false;  
    if (n <= 3)  return true; 
    if (n%2 == 0 || n%3 == 0) return false;  
    for (int i=5; i*i<=n; i=i+6)  
    {
       if (n%i == 0 || n%(i+2) == 0)  
           return false; 
	}
    
    return true;  
}  
ll nextPrime(ll N) 
{
	N--;
    if (N <= 1) 
        return 2; 
  
    ll prime = N; 
    bool found = false;
    while (!found) { 
        prime++; 
		if (isPrime(prime)) 
            found = true; 
    } 
  
    return prime; 
} 
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		ll d;
		cin>>d;
		ll frst = nextPrime(1+d);
		ll snd = frst;
		snd = nextPrime(frst+d);
		cout<<snd*frst<<endl;
	}
	return 0;
}

