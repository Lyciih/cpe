#include <iostream>
#include <vector>

using namespace std;

int main(){
	int a,b;
	int temp;
	
	
	while(cin>>a>>b){
		vector<int> s;
		s.push_back(a);
		
		if(a == 1 || b == 1){
			cout<<"Boring!"<<endl;
		}
		else{
			while(a){
				if(a != 1){
					if(a % b != 0){
						cout<<"Boring!";
						break;
					}
					else{
						a = a / b;
						s.push_back(a);
					}
				}
				else{
					for(auto i = s.begin(); i != s.end(); i++){
						cout<<*i;
						
						if(i != prev(s.end())){
							cout<<" ";
						}
						
					}
					break;
				}
			
			}
			cout<<endl;
		}
	}
	
	return 0;
}
