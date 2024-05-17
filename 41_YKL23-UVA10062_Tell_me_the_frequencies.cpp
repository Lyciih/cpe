#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	string input;
	bool first = 0;
	
	while(getline(cin, input)){
		if(first == 0){
			first = 1;
		}
		else{
			cout<<endl;
		}
		
		
		map< int, int > ASCII;
		vector<pair< int, int >> temp;
		
		for(int i = 0; i < input.size(); i++){
			if(input[i] > 31 && input[i] != 127){
				ASCII[input[i]]++;
			}
		}
		
		for(auto it = ASCII.begin(); it != ASCII.end(); it++){
			temp.push_back(make_pair(it->first, it->second));
		}
		
		sort(temp.begin(), temp.end(), [](const auto& l, const auto& r){
			return l.first > r.first;
		});
		
		stable_sort(temp.begin(), temp.end(), [](const auto& l, const auto& r){
			return l.second < r.second;
		});
		
		for(auto it = temp.begin(); it != temp.end(); it++){
			cout<<it->first<<" "<<it->second<<endl;
		}
	}
	return 0;
}
