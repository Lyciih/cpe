#include <iostream>


//注意特殊情況的檢查，總分和加上總分差不會有奇數
using namespace std;

int main(){
	int cases;
	cin>>cases;
	
	int s,d;
	int a,b;
	
	while(cases){
		cases--;
		cin>>s>>d;
		
		a = (s+d)/2;
		b = s - a;
		
		if(b <= 0 || (s+d)%2 == 1){
			cout<<"impossible"<<endl;
		}
		else{
			if(a >= b){
				cout<<a<<" "<<b<<endl;
			}
			else{
				cout<<b<<" "<<a<<endl;
			}
		}
	
	}
	return 0;
}

