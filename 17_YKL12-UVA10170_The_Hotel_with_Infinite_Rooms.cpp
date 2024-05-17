#include <iostream>

using namespace std;

int main(){
	long long int a,b;
	
	while(cin>>a>>b){
		long long int sum = 0;
		while(1){
			sum += a;
			if(sum >= b){
				cout<<a<<endl;
				break;
			}
			else{
				a++;
			}
		}
	}
	
	return 0;
}