#include <iostream>

using namespace std;

int main(){
	int cases;
	cin>>cases;
	
	int M,N,Q;
	int r,c;
	char center,temp;
	int length;
	int tcm,tcn;
	int dcm,dcn;
	int out;
	
	while(cases){
		cases--;
		cin>>M>>N>>Q;
		cout<<M<<" "<<N<<" "<<Q<<endl;
		string matrix[M];
		
		for(int i = 0; i < M; i++){
			cin>>matrix[i];
		}
		
		for(int q = 0; q < Q; q++){
			cin>>r>>c;
			center = matrix[r][c];
			length = 1;
			
			while(1){
				length += 2;
				out = 0;
			
				tcm = r - (length/2);
				tcn = c - (length/2);
				dcm = r + (length/2);
				dcn = c + (length/2);
				if(tcm < 0 || tcn < 0 || dcm > M || dcn > N){
					length -= 2;
					break;
				}
				else{
					for(int i = tcn; i <= dcn; i++){
						if(matrix[tcm][i] != center){
							out = 1;
							break;
						}
						if(matrix[dcm][i] != center){
							out = 1;
							break;
						}
					}
					
					for(int i = tcm+1; i <= dcm-1; i++){
						if(matrix[i][tcn] != center){
							out = 1;
							break;
						}
						if(matrix[i][dcn] != center){
							out = 1;
							break;
						}
					}
				}
				if(out == 1){
					length -= 2;
					break;
				}
			}
			cout<<length<<endl;
		}
	}
	
	return 0;
}
