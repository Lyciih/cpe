#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>

// 學會用sstream，分別讀取一行中未知數量的數字

using namespace std;

int main(){
	string first_line;
	string second_line;
	int x;
	int num;
	int length;
	int sum;
	stringstream temp;
	
	
	while(getline(cin, first_line)){
		vector<int> numbers, de;
		sum = 0;
	
		temp.str("");
		temp.clear();		
		temp<<first_line;
		temp>>x;
		
		getline(cin, second_line);
		temp.str("");
		temp.clear();
		temp<<second_line;
		
		
						
				
		while(temp>>num){
			numbers.push_back(num);
		}
		

		length = numbers.size();
		
		for(int i = length; i > 1; i--){
			de.push_back(numbers[length - i] * (i - 1));
		}
		
		length = de.size();
		sum = 0;
		
		for(int i = length; i > 1; i--){
			sum += de[length - i] * pow(x, i-1);
		}
		
		sum += de[length-1];
		
		cout<<sum<<endl;
	}
	return 0;
}