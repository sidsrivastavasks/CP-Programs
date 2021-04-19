#include<bits/stdc++.h>
using namespace std;
class Human{
	public:
		bool penis;
		int teeth;
		
		int digestion(int input1, int input2){
			if(penis){
				cout<<"You are men"<<endl;
			}
			else{
				cout<<"Hello Sexy"<<endl;	
			}
			cout<<"This is Digestion Function ";
			return input1+input2;
		} 
		void sex(string condom, string lrki){
			cout<<teeth<<endl;
			cout<<condom<<" "<<lrki;
		}
};
int main(){
	Human meremannkanaam;
	meremannkanaam.penis = false;
	meremannkanaam.teeth = 32;
	cout<<meremannkanaam.teeth<<endl;
	cout<<meremannkanaam.digestion(20,30)<<endl;
	meremannkanaam.sex("condom", "Zinda Lrki");
	
	return 0;
}
