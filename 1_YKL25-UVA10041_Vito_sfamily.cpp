#include <iostream>
#include <algorithm>							// 使用sort需要引入

using namespace std;

int test_case;
int member;
int array[500];
int middle;
int sum;

int main(){
	cin >> test_case;							// 取得測試次數
	for(int i = 0; i< test_case; i++){			// 測試次數執行迴圈
		cin >> member;							// 取得本次測試資料筆數
		
		for(int j = 0; j < member; j++){
			cin >> array[j];					// 按照資料筆數讀取放入陣列中
		}

		sort(array, array+member);				// 對陣列進行排序
		
		middle = array[member/2];				// 取得中位數
		sum = 0;								// 初始化加總變數
		
		for(int k = 0; k < member; k++){
			sum += abs(middle - array[k]);		// 將中位數與每位鄰居相減得到距離，並取絕對值再累加
		}

		cout << sum << endl;					// 印出總值
	}
	return 0;
}
