#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int f(int m_size){
	string input;
	stringstream ss;
	int member;
	
	int matrix[m_size][m_size];

	for(int i = 0; i < m_size; i++){
		getline(cin, input);
		ss.clear();
		ss<<input;
		
		for(int j = 0; j < m_size; j++){
			ss>>member;
			matrix[i][j] = member;
		}
	}

	for(int i = 0; i < m_size; i++){
		for(int j = 0; j < m_size; j++){
			if(matrix[i][j] < 0){
				cout<<"Non-symmetric.";
				return 0;
			}
			else if(matrix[i][j] != 
			matrix[m_size - i - 1][m_size - j - 1]){
				cout<<"Non-symmetric.";
				return 0;
			}
		}
	}
	cout<<"Symmetric.";
	return 0;
}

int main(){
	string input;
	string temp;
	stringstream ss;
	int case_count;
	int count = 0;
	int m_size;
	
	getline(cin, input);
	ss<<input;
	ss>>case_count;
	
	while(case_count){
		case_count--;
		count++;
		cout<<"Test #"<<count<<": ";
	
		getline(cin, input);
		ss.clear();
		ss<<input;
		ss>>temp>>temp>>m_size;

		f(m_size);
		cout<<endl;
	}
	return 0;
}
