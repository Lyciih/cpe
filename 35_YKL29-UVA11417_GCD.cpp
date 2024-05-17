#include <iostream>

using namespace std;

int gcd(int a, int b){
	if(a % b == 0){
		return b;
	}
	
	return gcd(b, a % b);

}

int main(){
	int N;
	int G;
	
	while(cin>>N){
		if(N == 0){
			break;
		}
		G = 0;
		for(int i = 1; i < N; i++){
			for(int j = i+1; j <= N; j++){
				G += gcd(i, j);
			}
		}
		cout<<G<<endl;
	}
	
	return 0;
}
