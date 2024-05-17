#include <iostream>
#include <string>

using namespace std;

int main(){
	int count;
	int temp;
	string input;
	
	while(getline(cin, input)){
		count = stoi(input);
		if(count == 0){
			break;
		}
		
		int die[]= {6, 4, 5, 3, 2, 1};
		
		for(int i = 0; i < count; i++){
			getline(cin, input);
			if(input == "east"){	
				temp = die[0];
				die[0] = die[1];
				die[1] = die[5];
				die[5] = die[3];
				die[3] = temp;
			}
			else if(input == "south"){
				temp = die[0];
				die[0] = die[2];
				die[2] = die[5];
				die[5] = die[4];
				die[4] = temp;
			}
			else if(input == "west"){
				temp = die[0];
				die[0] = die[3];
				die[3] = die[5];
				die[5] = die[1];
				die[1] = temp;
			}
			else if(input == "north"){
				temp = die[0];
				die[0] = die[4];
				die[4] = die[5];
				die[5] = die[2];
				die[2] = temp;
			}
		}
		
		cout<<die[5]<<endl;
	}
	return 0;
}
