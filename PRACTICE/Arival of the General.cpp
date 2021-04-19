#include<bits/stdc++.h>
using namespace std ; 
int main ()
{
	int n ;
	cin >> n ;
	int a[n] ;
	int max = 0 , min = 1100 ;  
	int posmin = n , posmax = 1 ;
	for ( int i = 1 ; i <= n ; i ++) 
	{
		cin >> a[i] ;
		if ( a[i] >= max )
		{
			posmax = i ;
			max = a[i] ;
		}
		if ( a[i] <= min ) 
		{
			posmin = i ;
			min = a[i] ;
		}
	}
	for(int i = 1; i<=n; i++)
	{
		if(a[i]==max)
		{
			posmax = i;
			break;
		}
	}
	//cout << a [n] << " " << a [1]<<endl;;
	//cout<<min<<" "<<max<<endl;
	if(a[n]!=min || a[1]!=max)
	{
		if ( posmin < posmax )
		{
			cout << (( posmax - 1 ) + (( n - 1 ) - posmin ));
		}
		else
		{
			cout << ( posmax - 1 ) + ( n - posmin );
		}
	}
	else{
		cout<<"0"<<endl;
	}
	return 0 ; 
}
