#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	int n;
	cin>>n;
	
	string country;
	string name;
	map<string, int> m;
	map<string, int> ::iterator i;
	
	while(n--){
		cin>>country;
		getline(cin, name);
		m[country]++;
	}
	
	for(i = m.begin(); i != m.end(); i++){
		cout<<i->first<<" "<<i->second<<endl;
	}
	
	return 0;
}