#include<bits/stdc++.h>
using namespace std;
int main()
{
	char cura,curb,visa,visb;
	cin>>cura>>curb>>visa>>visb;
	cout<<max(abs(cura-visa),abs(curb-visb))<<endl;
	while(1)
	{
		if(cura==visa && curb==visb)break;
		if(cura<visa){
			cura++;
			cout<<"R";	
		}
		if(cura>visa){
			cura--;
			cout<<"L";
		}
		if(curb<visb){
			curb++;
			cout<<"U";
		}
		if(curb>visb){
			curb--;
			cout<<"D";
		}
		cout<<endl;
	}
	return 0;
}
