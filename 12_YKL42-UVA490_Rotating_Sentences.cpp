#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 拿.size()的結果來幫index時，記得-1

int main(){
	string temp;
	vector<string>	input;
	int n = 0;
	int most_long = 0;
	
	while(getline(cin, temp)){
		input.push_back(temp);
		if(temp.size() > most_long){
			most_long = temp.size();
		}
	}
	

	
	for(int i = 0; i < most_long; i++){
		for(int j = input.size() - 1; j >= 0; j--){
			if(input[j].size() - 1 >= i){
				cout<<input[j][i];
			}
			else if(j != 0){
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	
	return 0;
}