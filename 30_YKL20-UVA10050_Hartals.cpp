#include <iostream>

using namespace std;

int main(){
	int cases;
	cin>>cases;
	int days;
	int parties;
	int h;
	int count;
	int sum;
	
	for(int i = 0; i < cases; i++){
		cin>>days;
		cin>>parties;
		bool table[days];
		for(int d = 0; d < days; d++){
			table[d] = 0;
		}
		
		for(int j = 0; j < parties; j++){
			cin>>h;
			count = h;
			while(count <= days){
				if(count % 7 != 6 && count % 7 != 0){
					table[count - 1] = 1;
				}
				count += h;
			}
		}
			
		sum = 0;
		for(int c = 0; c < days; c++){
			sum += table[c];
		}
		cout<<sum<<endl;
	}
	
	return 0;
}
