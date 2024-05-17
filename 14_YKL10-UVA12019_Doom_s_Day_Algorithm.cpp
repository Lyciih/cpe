#include <iostream>
using namespace std;


// 判断西元年份是否为闰年的规则是：
// 如果该年份能被4整除但不能被100整除，则是闰年。
// 如果该年份能被400整除，则也是闰年。

// 闰年的二月有 29 天，普通年份的二月有 28 天




int day(int day){
	if(day < 0){
		day = day + 7;
	}
	
	switch(day){
		case 0:
			cout<<"Monday";
			break;
		case 1:
			cout<<"Tuesday";
			break;
		case 2:
			cout<<"Wednesday";
			break;
		case 3:
			cout<<"Thursday";
			break;
		case 4:
			cout<<"Friday";
			break;
		case 5:
			cout<<"Saturday";
			break;
		case 6:
			cout<<"Sunday";
			break;
	}
	return 0;
}


using namespace std;

int main(){
	int cases;
	cin>>cases;
	
	int M;
	int D;
	
	while(cases){
		cases--;
		cin>>M;
		cin>>D;
		//cout<<M<<" "<<D<<" ";
		
		switch(M){
			case 1:// leap 1/11  no leap 1/10
				day((D-10)%7);
				break;
			case 2:// leap 2/22  no leap 2/21
				day((D-21)%7);
				break;
				
			case 3:
				day((D+7)%7);
				break;
			
			case 4:// 4/4
				day((D-4)%7);
				break;
				
			case 5:// 5/9
				day((D-9)%7);
				break;
			
			case 6:// 6/6
				day((D-6)%7);
				break;
			
			case 7:// 7/11
				day((D-11)%7);
				break;
			
			case 8:// 8/8
				day((D-8)%7);
				break;
				
			case 9:// 9/5
				day((D-5)%7);
				break;
				
			case 10:// 10/10
				day((D-10)%7);
				break;
				
			case 11:// 11/7
				day((D-7)%7);
				break;
			
			case 12:// 12/12
				day((D-12)%7);
				break;
		}
		cout<<endl;
	}
	
	return 0;
}