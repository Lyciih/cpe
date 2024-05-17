#include <iostream>
#include <string>
#include <sstream>
#include <bitset>

using namespace std;

int main(){
	int N;
	cin>>N;
	string M;
	int sum;
	
	while(N){
		N--;
		cin>>M;
		sum = 0;
		
		for(int i = 0; i < M.size(); i++){
			sum *= 10;
			sum += M[i] - '0';
		}
		
		bitset<32> dec(sum);
		cout<<dec.count()<<" ";
		
		
		sum = 0;
		for(int i = 0; i < M.size(); i++){
			sum *= 16;
			sum += M[i] - '0';
		}
		
		bitset<32> hex(sum);
		cout<<hex.count()<<endl;
		
	}
	return 0;
}
