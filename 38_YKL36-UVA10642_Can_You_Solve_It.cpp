#include <iostream>

using namespace std;

int f(int sx, int sy, int ex, int ey){
	int count = 0;
	
	while(1){
		if(sx == ex && sy == ey){
			break;
		}
	
		if(sy == 0){
			sy = sx + 1;
			sx = 0;
			count++;
		}
		else{
			sx++;
			sy--;
			count++;
		}
	}
	cout<<count<<endl;
}

int main(){
	int cases;
	cin>>cases;
	int sx, sy, ex, ey;
	
	for(int i = 1; i <= cases; i++){
		cout<<"Case "<<i<<": ";
		cin>>sx>>sy>>ex>>ey;
		
		f(sx, sy, ex, ey);
	}
	return 0;
}
