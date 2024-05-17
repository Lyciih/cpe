#include <iostream>
#include <sstream>

using namespace std;

int main(){
	string input;
	stringstream ss;
	int a,b;
	int cases = 0;
	int first = 0;
	
	while(1){
		ss.clear();
		ss.str("");
		
		getline(cin, input);
		ss<<input;
		ss>>a>>b;
		
		if(a == 0 && b == 0){
			break;
		}
		else{
			if(first == 0){
				first = 1;
			}
			else{
				cout<<endl;
			}
		}
		
		int m[a][b];
		for(int i = 0; i < a; i++){
			for(int j = 0; j < b; j++){
				m[i][j] = 0;
			}
		}
		
		cases++;
		cout<<"Field #"<<cases<<":"<<endl;
		
		for(int i = 0; i < a; i++){
			getline(cin, input);
			for(int j = 0; j < b; j++){
				if(input[j] == '*'){
					m[i][j] = -1;
					
					if(i >= 1){
						for(int k = j-1; k < j + 2; k++){
							if(k >= 0 && k < b){
								if(m[i-1][k] != -1){
									m[i-1][k]++;
								}
							}
						}
					}
					
					
					for(int k = j-1; k < j + 2; k++){
						if(k >= 0 && k < b){
							if(m[i][k] != -1){
								m[i][k]++;
							}
						}
					}
					
					
					if(i < a - 1){
						for(int k = j-1; k < j + 2; k++){
							if(k >= 0 && k < b){
								if(m[i+1][k] != -1){
									m[i+1][k]++;
								}
							}
						}
					}
					
				}
			}
		}
		
		for(int i = 0; i < a; i++){
			for(int j = 0; j < b; j++){
				if(m[i][j] == -1){
					cout<<'*';
				}
				else{
					cout<<m[i][j];
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
