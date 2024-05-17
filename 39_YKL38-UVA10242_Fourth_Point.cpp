#include <iostream>
#include <iomanip>
#include <utility>

using namespace std;

//相同的點不一定是放在第2和第3，要自己檢查

//平行四邊形，對角兩點座標相加，等於另一組對角座標相加
//本題解法將四個座標，減去3倍的相同點座標，就是答案

pair< int, int > f(double input[]){
	
	for(int i = 1; i < 4; i++){
		for(int j = 0; j < i; j++){
			if(input[i*2] == input[j*2] && input[i*2+1] == input[j*2+1]){
				return pair< int, int >(i, j);
			}
		}
	}
	
}

int main(){
	double input[8];
	double temp[2];
	pair< int, int > de;
	int table[4];
	
	while(
		cin>>input[0]>>input[1]>>input[2]>>input[3]
		>>input[4]>>input[5]>>input[6]>>input[7]
		){
			de = f(input);
			temp[0] = 0;
			temp[1] = 0;
			for(int i = 0; i < 4; i++){
				temp[0] += input[i*2];
				temp[1] += input[i*2+1];
			}
			
			temp[0] -= 3 * input[de.first*2];
			temp[1] -= 3 * input[de.first*2+1];
						
			cout<<fixed<<setprecision(3)<<temp[0]<<" "<<temp[1]<<endl;
		}
	
	return 0;
}
