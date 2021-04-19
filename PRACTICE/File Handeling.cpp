#include<bits/stdc++.h>
using namespace std;
int main(){
	//ofstream fout;
	char s;
	ifstream fin;
	//fout.open("MyFile");
	//fout<<"Teri maa ki Chut";
	fin.open("MyFile");
	s = fin.get(); 
	while(!fin.eof()){ //file ka end jb tk nhi aayega tb tk loop chalega
		cout<<s;
		s = fin.get(); 
	}
	fin.close();
}
