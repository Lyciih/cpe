#include <iostream>

using namespace std;

//盡量減少使用乘法和除法，可以減少耗時

int f(int N){
	int cola = N;
	int enpty = N;
	int temp;
	
	while(enpty >= 3){
		temp = enpty / 3;
		cola += temp;
		enpty = (enpty % 3) + temp;
	}

	if(enpty == 2){
		cola++;
	}
	
	cout<<cola<<endl;
	return 0;
}

int main(){
	int input;
	while(cin>>input){
		f(input);
	}
	return 0;
}
