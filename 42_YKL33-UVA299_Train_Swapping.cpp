#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int cases;
	int count;
	int sum;
	int change;
	
	cin>>cases;
	
	for(int i = 0; i < cases; i++){
		cin>>count;
		int number[count];
		
		for(int j = 0; j < count; j++){
			cin>>number[j];
		}
				
		sum = 0;
		
		while(1){
			change = 0;
			for(int k = 0; k < count-1; k++){
				if(number[k] > number[k+1]){
					swap(number[k], number[k+1]);
					change++;
				}
			}
			
			if(change == 0){
				break;
			}
			else{
				sum += change;
			}
		}
		
		cout<<"Optimal train swapping takes "<<sum<<" swaps."<<endl;
	}
	
	return 0;
}
