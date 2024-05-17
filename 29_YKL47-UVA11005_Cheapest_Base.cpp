#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

//注意輸入需要long long int

using namespace std;

f(long long int number, int cost[]){
	int sum;
	long long int temp;
	vector<pair<int, int>> c;
	int same;
		
	for(int base = 2; base <= 36; base++){
		temp = number;
		vector<int> tran;
		sum = 0;
		
		while(temp){
			tran.push_back(temp % base);
			temp /= base;
		}
		
		for(int i = tran.size() - 1; i >= 0; i--){
			sum += cost[tran[i]];
		}
		
		c.push_back(make_pair(base, sum));
	}
	
	
	stable_sort(c.begin(), c.end(), [](const auto& l, const auto& r){
		return l.second < r.second;
	});

	auto i = c.begin();
	same = i->second;
	cout<<i->first;
	
	for(auto i = next(c.begin()); i != c.end(); i++){
		if(i->second == same){
			cout<<" "<<i->first;
		}
		else{
			break;
		}
	}
	
	cout<<endl;
}


int main(){
	int cases;
	cin>>cases;
	int cost[36];
	int lines;
	long long int number;
	
	for(int case_count = 1; case_count <= cases; case_count++){
		cout<<"Case "<<case_count<<":"<<endl;
		
		for(int i = 0; i < 36; i++){
			cin>>cost[i];
		}
		
		cin>>lines;
		for(int i = 0; i < lines; i++){
			cin>>number;
			cout<<"Cheapest base(s) for number ";
			cout<<number<<": ";
			f(number, cost);
		}
		
		if(case_count != cases){
			cout<<endl;
		}
	}
	
	return 0;
}
