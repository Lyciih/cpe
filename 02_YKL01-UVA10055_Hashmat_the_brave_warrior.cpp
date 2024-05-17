#include <iostream>

using namespace std;
                                                // 題目說，數量可達 2^32 ，要用 long long int 才夠
                                                // (long int 和 int 是一樣的長度)
long long int army;                             // 我方軍隊數
long long int opponent;                         // 敵人數

int main(){
	
    while(cin >> army >> opponent){             // 每次讀取兩筆，直到檔案結束。cin若讀取失敗或讀到EOF，返回值為0
		cout << abs(army - opponent) << endl;   // 雙方人數相減取絕對值，印出
	}

	return 0;
}