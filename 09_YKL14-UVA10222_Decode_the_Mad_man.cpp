#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char table[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	string input;
	char temp;
	
	while(getline(cin, input)){
		for(int i = 0; i < input.size(); i++){
			for(int j = 0; j < strlen(table); j++){
				temp = tolower(input[i]);
				if(temp == ' '){
					cout<<" ";
					break;
				}
				else if(temp == table[j]){
					cout<<table[j-2];
					break;
				}
			}
		
		}
		cout<<endl;

	}
	return 0;	
}