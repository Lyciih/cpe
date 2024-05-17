#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

//關於第一個輸出
//當數量為偶數時，中位數可能有兩個(但如果兩者相同還是只有1個)。

//關於第二個輸出
//因為中位數本身就在資料中，所以相減的最小值一定是0
//直接掃描所有資料比對是否相同

//關於第三個輸出
//先假設你的數列已經排序了。如果n是偶數，
//且兩個中位數a, b 不相等時，
//你在a b 之間插入任何數k (a<k<b)，
//k 一定會變成這個數列的中位數。

//abs不能用在無號數

int main(){
	unsigned int count;
	unsigned int A1, A2, L, T;
	
	while(cin>>count){
		unsigned int input[count];
		unsigned int temp[count];
		A1 = 0;
		A2 = 0;
		L = 0;
		
		for(int i = 0; i < count; i++){
			cin>>input[i];
		}
		
		sort(input, input + count);
		if(count & 1){
			A1 = input[count/2];
			T = 1;
			for(int i = 0; i < count; i++){
				if(input[i] == A1){
					L++;
				}
			}
		}
		else{
			A1 = input[count/2 - 1];
			A2 = input[count/2];
			T = A2 - A1 + 1;
			for(int i = 0; i < count; i++){
				if(input[i] == A1 || input[i] == A2){
					L++;
				}
			}
		}
		
		cout<<A1<<" "<<L<<" "<<T<<endl;
	}
	return 0;
}
