#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int prime(int x){
	if(x == 1){
		return 0;
	}
	
	for(int i = 2; i * i <= x; i++){
		if(x % i == 0){
			return 0;
		}
	}
	
	return 1;
	
}

int main(){
	string input;
	int p,r;

	while(cin>>input){
		p = stoi(input);
		
		if(prime(p) == 0){
			cout<<p<<" is not prime.";
		}
		else{
			reverse(input.begin(), input.end());
			r = stoi(input);
			if(prime(r) == 0 || r == p){
				cout<<p<<" is prime.";
			}
			else{
				cout<<p<<" is emirp.";
			}
		}
		cout<<endl;
	}
	
	return 0;
}
