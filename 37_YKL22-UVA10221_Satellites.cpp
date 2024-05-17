#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

template< typename T, typename U>
int f(T s, T a, U mode){
	T radius;
	T circumference;
	T minute, degree;
	T arc, chord;
		
	radius = 6440 + s;
	circumference = 2 * M_PI * radius;
				
				
	if(mode == "min"){
		degree = a / 60;
	}
	else{
		degree = a;
	}
				
	//浮點數不能使用 %運算，需要自己處理
	while(degree > 360){
		degree -= 360;
	}
		
	if(degree > 180){
		degree = 360 - degree;
	}
					
	arc = circumference * (degree / 360);
				
	//C++中 三角函數的參數都是弧度制
	//因此要把角度乘以 pi/180(一個pi等於180度)來換成弧度
	chord = sin(degree / 2 * M_PI / 180) * radius * 2;
				
	//C++ 默認顯示就是到小數點後6位
	//所以沒有 setprecision(6) 也沒關係
	cout<<fixed<<setprecision(6)<<arc<<" "<<chord<<endl;
	return 0;
}



int main(){
	double s,a;
	string mode;

	while(cin>>s>>a>>mode){
		f(s, a, mode);
	}
	
	return 0;
}
