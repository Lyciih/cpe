#include <iostream>
#include <string>

using namespace std;

string input;
int odd_sum;
int even_sum;
int digits;



int main(){	
	while(cin>>input, input != "0"){
		odd_sum = 0;
		even_sum = 0;
		
		digits = input.size();
		
        // 利用ASCII碼照順序編排的特性，減掉0的字元編碼就會剛好是單個字元的數值
		for(int i = 0; i < digits; i+=2){
			odd_sum += input[i] - '0';  
		}
		
		for(int j = 1; j < digits; j+=2){
			even_sum += input[j] - '0';
		}
		
		cout << input << " ";

        // 奇數位總和與偶數位總和相減，如果是0 或 11的倍數，那原來的數就是11的倍數
		if((odd_sum - even_sum) == 0 || (abs(odd_sum - even_sum) % 11) == 0){   
			cout << "is a multiple of 11." << endl;
		}
		else{
			cout << "is not a multiple of 11." << endl;
		}	
	}		
	return 0;
}