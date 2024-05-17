#include <iostream>
#include <iomanip>
#include <string>
#include <map>

using namespace std;

int f(){
	string input;
	map<string, double> m;
	double sum = 0;
	double output;
	
	while(getline(cin, input)){
		if(input == ""){
			break;
		}
		else{
			m[input]++;
		}
	}
	
	for(auto i = m.begin(); i != m.end(); i++){
		sum += i->second;
	}
	
	sum /= 100;
	
	for(auto i = m.begin(); i != m.end(); i++){
		cout<<i->first<<" "<<fixed<<setprecision(4)<<i->second / sum<<endl;
	}
	
}

int main(){
	int cases;
	int first = 0;
	string input;
	
	getline(cin, input);	
	cases = stoi(input);
	getline(cin, input);
	
	for(int i = 0; i < cases; i++){
		if(first == 0){
			first = 1;
		}
		else{
			cout<<endl;
		}
		f();
	}
	return 0;
}
