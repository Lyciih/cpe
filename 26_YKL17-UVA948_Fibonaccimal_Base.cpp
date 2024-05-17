#include <iostream>
#include <vector>

using namespace std;

int main(){
	int N;
	int input;
	cin>>N;
	
	vector<int> F;
	F.push_back(0);
	F.push_back(1);
	
	for(int i = 2; i < 41; i++){
		F.push_back(F[i-2] + F[i-1]);
	}
	
	int out[41];
	
	while(N){
		N--;
		cin>>input;
		
		cout<<input<<" = ";
		
		bool first = 0;
		int end = 0;
		
		for(int i = 40; i >= 0; i--){
			if(F[i] <= input){
				if(first == 0){
					first = 1;
					end = i;
				}
				
				input -= F[i];
				out[i] = 1;
			}
			else{
				out[i] = 0;
			}
		}
		
		
		for(int i = end; i > 1; i--){
			cout<<out[i];
		}
		
		cout<<" (fib)"<<endl;
		
	}
	
	return 0;
}
