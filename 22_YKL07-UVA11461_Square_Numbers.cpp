#include <iostream>
#include <sstream>
#include <string>
#include <cmath>


using namespace std;

int main(){
	string input;
	stringstream ss;
	int a,b;
	
	while(getline(cin, input)){
		ss.clear();
		ss.str("");
		ss<<input;
		ss>>a>>b;
		
		if(a == 0 && b == 0){
			break;
		}
		else{
			int begin = sqrt(a);
			int count = 0;
			int temp;
			
			while(1){
				temp = begin*begin;
				
				if(temp >= a){
					if(temp <= b){
						count++;
					}
					else{
						break;
					}
				}
				begin++;
			}
			cout<<count<<endl;
		}
	}
	
	return 0;
}
