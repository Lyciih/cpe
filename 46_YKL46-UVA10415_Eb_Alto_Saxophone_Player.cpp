#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

//注意變數名與函數名不可衝突
//宣告二維數組時，第二維度需要自己告訴編譯器

int m[][10] = {
	{0, 1, 1, 0, 0, 0, 0, 0, 0, 0},
	{0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 1, 1, 1, 0, 0, 1, 1, 1, 1},
	{0, 1, 1, 1, 0, 0, 1, 1, 1, 0},
	{0, 1, 1, 1, 0, 0, 1, 1, 0, 0},
	{0, 1, 1, 1, 0, 0, 1, 0, 0, 0},
	{0, 1, 1, 1, 0, 0, 0, 0, 0, 0},	
	{1, 1, 1, 0, 0, 0, 0, 0, 0, 0},
	{1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
	{1, 1, 1, 1, 0, 0, 1, 1, 1, 0},
	{1, 1, 1, 1, 0, 0, 1, 1, 0, 0},
	{1, 1, 1, 1, 0, 0, 1, 0, 0, 0},
	{1, 1, 1, 1, 0, 0, 0, 0, 0, 0}
};

int alg(){
	string input;
	getline(cin, input);
	int target;
	
	int finger[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	bool on[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	
	for(int i = 0; i < input.size(); i++){
		if(islower(input[i])){
			target = input[i] - 'a';
		}
		else{
			target = input[i] - 'A' + 7;
		}
		
		
		for(int j = 0; j < 10; j++){
			if(m[target][j] == 1){
				if(on[j] == 0){
					on[j] = 1;
					finger[j]++;
				}
			}
			else{
				if(on[j] == 1){
					on[j] = 0;
				}
			}
		}
	}
	
	for(int i = 0; i < 10; i++){
		cout<<finger[i];
		if(i != 9){
			cout<<" ";
		}
	}
	
	cout<<endl;
	return 0;
}

int main(){
	int cases;
	string input;
	getline(cin, input);
	cases = stoi(input);
	



	for(int i = 0; i < cases; i++){
		alg();
	}
	
	return 0;
}
