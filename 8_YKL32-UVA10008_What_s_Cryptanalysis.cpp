#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int cmp(pair<int, char> p1, pair<int, char> p2){
	return (p1.first) > (p2.first);
}

 int main(){
 	int n;
 	cin>>n;
 	
 	char input;
	map<char, int> m;
	map<char, int> ::iterator i;
	
	vector<pair<int, char>> v;
	vector<pair<int, char>> ::iterator j;
 	
 	while(cin>>input){
 		if(isalpha(input)){
 			m[toupper(input)]++;
 		}
 	}


 	for(i = m.begin(); i != m.end(); i++){
 		v.push_back(make_pair(i->second, i->first));
 	}

	stable_sort(v.begin(), v.end(), cmp);
	
 	for(j = v.begin(); j != v.end(); j++){
 		cout<<j->second<<" "<<j->first<<endl;
 	}
	
 	return 0;
 }