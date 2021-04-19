#include <bits/stdc++.h>
using namespace std;

int main() {
	int trid,spcl,oncst,spclcst;
	cin>>trid>>spcl>>oncst>>spclcst;
	int ans = min((trid*oncst),((trid%spcl)*oncst+(trid/spcl)*spclcst));
	int ans2 = trid%spcl!=0? (trid/spcl + 1)*spclcst : (trid/spcl)*spclcst;
	cout<<min(ans,ans2);
	return 0;
}
