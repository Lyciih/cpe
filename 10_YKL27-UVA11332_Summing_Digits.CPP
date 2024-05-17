#include <iostream>
#include <string>

using namespace std;

int f(string number){
	int sum = 0;
	
	for(int i = 0; i < number.size(); i++){
		sum += number[i] - '0';
	}
	
	if(sum >= 10){
		f(to_string(sum));
	}
	else{
		cout<<sum<<endl;
	}
	return 0;
}

int main(){
	string input;
	
	while(cin>>input){
		if(input == "0"){
			break;
		}
		
		f(input);
	}
	return 0;
}