#include <iostream>

using namespace std;

long long int answer(long long int n){
const unsigned int M = 1000000007;
if(n==0)return 1;
else if(n%2==0){
    long long int y=answer(n/2);
    return (y*y)%M;
}
else{
    return ((2%M)*(answer(n-1)))%M;
}



}

int main()
{
    long long int n;
    cin>>n;
    cout<<answer(n);
    return 0;
}
