#include <iostream>
#include <string>

// 狀態機

using namespace std;

int main(){
	string input;
	int state = 0;
	
	while(getline(cin, input)){	
		
		for(int i = 0; i < input.size(); i++){
			if(input[i] == '"'){
				if(state == 0){
					cout<<"``";
					state = 1;
				}
				else{
					cout<<"''";
					state = 0;
				}
			}
			else{
				cout<<input[i];
			}
		}
		cout<<endl;
	}
	return 0;
}