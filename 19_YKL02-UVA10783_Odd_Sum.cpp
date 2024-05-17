#include <iostream>

//用and運算判斷奇偶數有些邊義氣會出錯

using namespace std;

int main(){
	int cases;
	cin>>cases;
	int count = cases;
	
	int begin,end;
	
	cout<<unitbuf;
	
	while(count){
		int sum = 0;
		count--;
		cin>>begin>>end;
		

		cout<<"Case "<<cases - count<<": ";

		
		for(int i = begin; i <= end; i++){
			if(i%2 == 1){
				sum += i;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}