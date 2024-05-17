#include <iostream>

using namespace std;

int alg(int number){
	int count = 1;
	
	while(number != 1){
		if((number & 1) == 1){
			number = 3 * number + 1;
		}
		else{
			number /= 2;
		}
		count++;
	}
	return count;
}

int main(){
	int a,b;
	int count_temp;
	int max_count;
		
	while(cin>>a>>b){
		max_count = 0;

		// 注意，是i到j之間包含ij的數字都帶入演算法來計算數列長度並比較
		for(int i = min(a, b); i <= max(a, b); i++){
			count_temp = alg(i);
			if(count_temp > max_count){
				max_count = count_temp;
			}
		}

		cout<<a<<" "<<b<<" "<<max_count<<endl;
	}

	return 0;
}