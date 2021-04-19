#include <iostream>
using namespace std;

int main() {
	int w,h;
	cin>>w>>h;
	int ws1,hs1;
	cin>>ws1>>hs1;
	int ws2,hs2;
	cin>>ws2>>hs2;
	int i = h;
	while(i>=0)
	{
		if(i!=hs1 && i!=hs2)
		{
			w+=i;
			//cout<<w<<endl;
		}
		else
		{
			w+=i;
			//cout<<w<<endl;
			if(i==hs1)
			{
				w-=ws1;
			}
			else
			{
				w-=ws2;
			}
		}
		//cout<<w<<endl;
		if(w<0)
		{
			w = 0;
		}
		i--;
	}
	cout<<w;
	return 0;
}
