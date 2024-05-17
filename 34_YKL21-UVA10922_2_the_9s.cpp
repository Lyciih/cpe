#include <iostream>
#include <string>

using namespace std;

int main(){
	string input;
	
	while(cin>>input){
		if(input == "0"){
			break;
		}
		else{
			cout<<input;
			int sum;
			int degree = 0;
			
			while(1){
				sum = 0;
				
				for(int i = 0; i < input.size(); i++){
					sum += input[i] - '0';
				}
				
				if(sum % 9 == 0){
					degree++;
					if(sum / 9 > 1){
						input = to_string(sum);
					}
					else{
						break;
					}
				}
				else{
					break;
				}
			}
			
			if(degree == 0){
				cout<<" is not a multiple of 9."<<endl;
			}
			else{
				cout<<" is a multiple of 9 and has 9-degree "<<degree<<"."<<endl;
			}
		}
	}
	
	return 0;
}
