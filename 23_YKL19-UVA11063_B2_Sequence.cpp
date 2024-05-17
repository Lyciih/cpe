#include <iostream>
#include <sstream>
#include <string>
#include <map>

using namespace std;

int f(int member){
	string input;
	stringstream ss;
	int arr[member];
	int temp;
	
	getline(cin, input);
	ss<<input;
	
	for(int i = 0; i < member; i++){
		ss>>arr[i];
	}
	
	map<int, int> data;
		
	for(int i = 0; i < member - 1; i++){
		for(int j = i + 1; j < member; j++){
			temp = arr[i] + arr[j];
			data[temp]++;
			if(data[temp] > 1){
				return -1;
			}
		}
	}
	
	return 0;
}

int main(){
	string input;
	stringstream ss;
	int case_count = 0;
	int member;
	int result;
	
	while(getline(cin, input)){
		case_count++;
		
		ss.clear();
		ss.str("");
		ss<<input;
		ss>>member;
		
		result = f(member);
		
		getline(cin, input);
		cout<<"Case #"<<case_count<<": ";
		if(result == 0){
			cout<<"It is a B2-Sequence."<<endl;
		}
		else{
			cout<<"It is not a B2-Sequence."<<endl;
		}
		cout<<endl;
	}
	return 0;
}
