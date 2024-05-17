#include <iostream>


//在不同階段要檢查不同的條件
//注意index的起始和結束範圍

using namespace std;

int main(){
	int n;
	int input[3000];
	int count[3000];
	int state;
	int temp;
	
	
	while(cin>>n){
		state = 0;
		for(int i = 0; i < n; i++){
			cin>>input[i];
			count[i] = 0;
		}
		
		for(int i = 0; i < n-1; i++){
			temp = abs(input[i] - input[i+1]);
			if(temp >= n || temp == 0){
				state = 1;
				break;
			}
			else{
				count[temp] = 1;
			}
		}
		
		if(state == 0){
			for(int i = 1; i <= n-1; i++){
				if(count[i] == 0){
					state = 1;
					break;
				}
			}
		}


		
		if(state == 1){
			cout<<"Not jolly"<<endl;
		}
		else{
			cout<<"Jolly"<<endl;
		}

	}
	return 0;
}