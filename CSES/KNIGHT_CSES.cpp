#include <iostream>

using namespace std;

int main()
{
    long long int n,add,sub;cin>>n;
    for(long long int i=1;i<=n;i++){

        add=(i*i);
        add = add*(i*i-1);
        add=add/2;
        sub=4*(i-1)*(i-2);
        cout<<add-sub<<endl;
    }
    return 0;
}
