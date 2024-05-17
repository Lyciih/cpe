#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
	string input;
	while(getline(cin, input)){
		int length = input.size();
		int number[length];
		int sum = 0;
		int big = 0;
		bool found = 0;
		
		for(int i = 0; i < length; i++){
			char temp = input[i];
			int digit;
			
			if(isdigit(temp)){
				digit = atoi(&temp);
			}
			else if(isupper(temp)){
				digit = temp - 'A' + 10;
			}
			else if(islower(temp)){
				digit = temp - 'a' + 36;
			}
			else{
				digit = 0;
			}
			
			if(digit > big){
				big = digit;
			}
			
			sum += digit;			
		}
		
		if(sum == 0){
				cout<<2<<endl;
				found = 1;
		}
		else{
		
			for(int N = big + 1; N <= 62; N++){
				
				//模運算被除數不能是0
				if(sum % (N-1) == 0){
					cout<<N<<endl;
					found = 1;
					break;
				}
			}
		}
		
		if(found == 0){
			cout<<"such number is impossible!"<<endl;
		}
	}
	return 0;
}
