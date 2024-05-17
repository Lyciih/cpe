#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//在sort函數中利用lamda函數一次處理

int main(){
	int N, M, temp;
	
	while(cin>>N>>M){
		cout<<N<<" "<<M<<endl;
		vector<pair<int, int>> first;
		
		for(int i = 0; i < N; i++){
			cin>>temp;
			first.push_back(make_pair(temp, temp % M));
		}
		sort(first.begin(), first.end(), [](const auto& l, const auto& r){
			int lc, rc;
			lc = l.first & 1;
			rc = r.first & 1;
			
			if(l.second == r.second){
				if(lc == 1 && rc == 0){
					return (bool)1;
				}
				else if(lc == 1 && rc == 1){
					return l.first > r.first;
				}
				else if(lc == 0 && rc == 0){
					return l.first < r.first;
				}
				else{
					return (bool)0;
				}
			}
			
			return l.second < r.second;
		});
		
		for(auto i = first.begin(); i != first.end(); i++){
			cout<<i->first<<endl;
		}
	}
	return 0;
}
