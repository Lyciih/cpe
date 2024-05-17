#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
	string input;
	stringstream ss;
	int v,t;
	
	while(getline(cin, input)){
		ss.clear();
		ss.str("");
		ss<<input;
		ss>>v>>t;
		cout<<v*t*2<<endl;
	}
	return 0;
}
