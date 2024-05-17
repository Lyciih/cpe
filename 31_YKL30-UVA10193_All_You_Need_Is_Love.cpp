#include <iostream>

using namespace std;

int gcd(int a, int b){
	if(b == 0){
		return a;
	}
	
	return gcd(b, a%b);
};

int main(){
	int cases;
	cin>>cases;
	string a,b;
	int x,y;
	
	for(int i = 1; i <= cases; i++){
		cout<<"Pair #"<<i<<": ";
		cin>>a>>b;
		
		x = 0;
		for(int i = 0; i < a.size(); i++){
			x *= 2;
			x += a[i] - '0';
		}
		
		y = 0;
		for(int i = 0; i < b.size(); i++){
			y *= 2;
			y += b[i] - '0';
		}
		
		if(gcd(x, y) == 1){
			cout<<"Love is not all you need!";
		}
		else{
			cout<<"All you need is love!";
		}
		cout<<endl;
	}
	return 0;
}
