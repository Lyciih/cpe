#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	string a,b;
	
    // getline才可以涵蓋測資只有輸入Enter換行的狀況
	while(getline(cin, a)){
		getline(cin, b);
		
		
		map<char, int> m_a;
		map<char, int> m_b;
	
		map<char, int> ::iterator i_a;
		map<char, int> ::iterator i_b;
		
		for(int i = 0; i < a.size(); i++){
			m_a[a[i]]++;
		}
		
		for(int j = 0; j < b.size(); j++){
			m_b[b[j]]++;
		}
		
		
		if(m_a.size() >= m_b.size()){
			for(i_a = m_a.begin(); i_a != m_a.end(); i_a++){
				if(i_a->first != ' '){
					auto i_f = m_b.find(i_a->first);
					if(i_f != m_b.end()){
						for(int k = 0; k < min(i_a->second, i_f->second); k++){
							cout<<i_a->first;
						}
					}
				}
			}
		}
		else{
			for(i_b = m_b.begin(); i_b != m_b.end(); i_b++){
				if(i_b->first != ' '){
					auto i_f = m_a.find(i_b->first);
					if(i_f != m_a.end()){
						for(int k = 0; k < min(i_b->second, i_f->second); k++){
							cout<<i_b->first;
						}
					}
				}
			}
		}
		

		cout<<endl;
	}
	
	return 0;
}