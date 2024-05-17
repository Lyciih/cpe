#include <iostream>

using namespace std;

int trans(long long int input){
	if(input/10000000){trans(input/10000000);cout<<" kuti";input %= 10000000;}
	if(input/100000){trans(input/100000);cout<<" lakh";input %= 100000;}
	if(input/1000){trans(input/1000);cout<<" hajar";input %= 1000;}
	if(input/100){trans(input/100);cout<<" shata";input %= 100;}
	if(input){cout<<" "<<input;}
	return 0;
}


int main(){
	long long int input;
	int count = 0;
	
	while(cin>>input){
		count++;
		cout.width(4);
		cout<<count<<".";
		
		if(input == 0){
			cout<<" "<<input;
		}
		else{
			trans(input);
		}
		cout<<endl;
	}
	return 0;
}