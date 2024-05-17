#include <iostream>
#include <iomanip>
#include <cmath>

//使用無窮等比級數公式

using namespace std;

int main(){
	int S;
	cin>>S;
	
	int N;
	float p, f,count;
	int I;
	
	
	while(S){
		S--;
		cin>>N>>p>>I;
		
		if(p == 0){
			cout<<fixed<<setprecision(4)<<p<<endl;
		}
		else{
			f = 1-p;
			count = 1;
			
			int r = 50;
			
			count = pow(f, (I-1))*p*(1 - pow(f, r*N))/(1 - pow(f, N));
			
			cout<<fixed<<setprecision(4)<<count<<endl;
		}
		
		
	}
	return 0;
}