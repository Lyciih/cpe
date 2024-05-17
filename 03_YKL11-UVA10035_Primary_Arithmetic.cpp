#include <iostream>

using namespace std;

unsigned int a, b;

int carry[11];
int a_digits[10];
int b_digits[10];
int carry_sum;

int f(int number, int digits[]){
	for(int i = 0; i < 10; i++){
		digits[i] = number % 10;
		number /= 10;
	}
	return 0;
}


int main(){
	while(cin>>a>>b){
	
		if(a == 0 && b == 0){
			break;
		}
		else{
			for(int i = 0; i < 10; i++){
				carry[i] = 0;
			}
			
			f(a, a_digits);
			f(b, b_digits);
			
			for(int j = 0; j < 10; j++){
				// 兩數的單個位數相加，再加上該位的carry，來判斷是否進位
				if(a_digits[j] + b_digits[j] + carry[j] >= 10){
					carry[j+1] = 1;
				}
			}
			
			carry_sum = 0;
			for(int i = 0; i < 11; i++){
				carry_sum += carry[i];
			}
			

			if(carry_sum == 1){
				cout << carry_sum << " carry operation." << endl;
			}
			else if(carry_sum != 0){
				cout << carry_sum << " carry operations." << endl;
			}
			else{
				cout << "No carry operation." << endl;
			}
			
		}
	}
	return 0;
}