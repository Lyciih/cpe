#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

int main(){
	int input;
	int big;
	
	bool bits[32];
	bool first;
	int temp;
	
	while(cin>>input){
		if(input == 0){
			return 0;
		}
		
		cout<<"The parity of ";
		int first = 0;
		
		for(int i = 0; i < 32; i++){
			bits[31 - i] = input & (1 << i);
		}
		
		for(int i = 0; i < 32; i++){
			if(first == 0){
				if(bits[i] == 1){
					first = 1;
					cout<<bits[i];
				}
			}
			else{
				cout<<bits[i];
			}
		}

		cout<<" is ";
	
		bitset<32> bits(input);
		cout<<bits.count();
		
		cout<<" (mod 2)."<<endl;
	}
	
	return 0;
}
