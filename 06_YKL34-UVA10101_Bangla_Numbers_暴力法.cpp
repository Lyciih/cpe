#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	string input;
	int digits;
	int count = 0;
	
	while(cin>>input){
		count++;
		cout << setw(4) << right << count << ". ";
		
		digits = input.size();
		
		if(digits >= 15){
			if(digits > 17){
				if(input[digits-17] != '0' || input[digits-16] != '0' || input[digits-15] != '0'){
					cout<<" ";
					
					if(input[digits-17] != '0'){
						cout<<input[digits-17];
						cout<<" shata";
						if(input[digits-16] != '0' || input[digits-15] != '0'){
							cout<<" ";
						}
					}
					
					if(input[digits-16] != '0'){
						cout<<input[digits-16];
						cout<<input[digits-15];
					}
					else if(input[digits-15] != '0'){
						cout<<input[digits-15];
					}
					
					cout<<" kuti";	
				}
			}
			
				
			if(digits == 17){
				cout<<input[digits-17];
				cout<<" shata";
				
				if(input[digits-16] != '0' || input[digits-15] != '0'){
					cout<<" ";
					
					if(input[digits-16] != '0'){
						cout<<input[digits-16];
						cout<<input[digits-15];
					}
					else{
						cout<<input[digits-15];
					}
					
				}				
				cout<<" kuti";
			}
				
			if(digits == 16){
				cout<<input[digits-16];
				cout<<input[digits-15];
				cout<<" kuti";
			}
		
			if(digits == 15){
				cout<<input[digits-15];
				cout<<" kuti";
			}
		}

	
		if(digits >= 13){
			if(digits > 14){
				if(input[digits-14] != '0' || input[digits-13] != '0'){
					cout<<" ";
					
					if(input[digits-14] != '0'){
						cout<<input[digits-14];
						cout<<input[digits-13];	
					}
					else{
						cout<<input[digits-13];
	
					}
					cout<<" lakh";
					
				}

			}
		
			if(digits == 14){
				cout<<input[digits-14];
				cout<<input[digits-13];
				cout<<" lakh";
			}
			
			if(digits == 13){
				cout<<input[digits-13];
				cout<<" lakh";
			}
			
		}
			
		if(digits >= 11){
		
			if(digits > 12){
				if(input[digits-12] != '0' || input[digits-11] != '0'){
					cout<<" ";
					
					if(input[digits-12] != '0'){
						cout<<input[digits-12];
						cout<<input[digits-11];	
					}
					else{
						cout<<input[digits-1];
	
					}
					cout<<" hajar";
					
				}

			}
		
			if(digits == 12){
				cout<<input[digits-12];
				cout<<input[digits-11];
				cout<<" hajar";
			}
			
			if(digits == 11){
				cout<<input[digits-11];
				cout<<" hajar";
			}
			
		}


		if(digits >= 8){
			if(digits > 10){
				if(input[digits-10] != '0' || input[digits-9] != '0' || input[digits-8] != '0'){
					cout<<" ";
					
					if(input[digits-10] != '0'){
						cout<<input[digits-10];
						cout<<" shata";
						if(input[digits-9] != '0' || input[digits-8] != '0'){
							cout<<" ";
						}
					}
					
					if(input[digits-9] != '0'){
						cout<<input[digits-9];
						cout<<input[digits-8];
					}
					else if(input[digits-8] != '0'){
						cout<<input[digits-8];
					}
					
					cout<<" kuti";	
				}
			}
			
			
			if(digits == 10){
				cout<<input[digits-10];
				cout<<" shata";
				
				if(input[digits-2] != '0' || input[digits-1] != '0'){
					cout<<" ";
					
					if(input[digits-2] != '0'){
						cout<<input[digits-9];
						cout<<input[digits-8];
					}
					else{
						cout<<input[digits-8];
					}
					
				}				
				cout<<" kuti";
			}
			
			if(digits == 9){
				cout<<input[digits-9];
				cout<<input[digits-8];
				cout<<" kuti";
			}
			
			if(digits == 8){
				cout<<input[digits-8];
				cout<<" kuti";
			}
		}

		
		
		if(digits >= 6){
			if(digits > 7){
				if(input[digits-7] != '0' || input[digits-6] != '0'){
					cout<<" ";
					
					if(input[digits-7] != '0'){
						cout<<input[digits-7];
						cout<<input[digits-6];	
					}
					else{
						cout<<input[digits-6];		
					}
					cout<<" lakh";
					
				}

			}
		
			
			
			if(digits == 7){
				cout<<input[digits-7];
				cout<<input[digits-6];
				cout<<" lakh";
			}
				
			if(digits == 6){
				cout<<input[digits-6];
				cout<<" lakh";
			}
		}
		
		if(digits >= 4){
			
			if(digits > 5){
				if(input[digits-5] != '0' || input[digits-4] != '0'){
					cout<<" ";
					
					if(input[digits-5] != '0'){
						cout<<input[digits-5];
						cout<<input[digits-4];
					}
					else{
						cout<<input[digits-4];
							
					}
					cout<<" hajar";
				}
			}
		
			if(digits == 5){
				cout<<input[digits-5];
				cout<<input[digits-4];
				cout<<" hajar";
			}
			
			if(digits == 4){
				cout<<input[digits-4];
				cout<<" hajar";
			}
			
		}

	
		if(digits >= 1){

			if(digits > 3){
				if(input[digits-3] != '0' || input[digits-2] != '0' || input[digits-1] != '0'){
					cout<<" ";
					if(input[digits-3] != '0'){
						cout<<input[digits-3];
						cout<<" shata";
						if(input[digits-2] != '0' || input[digits-1] != '0'){
							cout<<" ";
						}
					}
					
					if(input[digits-2] != '0'){
						cout<<input[digits-2];
						cout<<input[digits-1];
					}
					else if(input[digits-1] != '0'){
						cout<<input[digits-1];
					}

				}

			}


			if(digits == 3){
				cout<<input[digits-3];
				cout<<" shata";
				
				if(input[digits-2] != '0' || input[digits-1] != '0'){
					cout<<" ";
					if(input[digits-2] != '0'){
						cout<<input[digits-2];
						cout<<input[digits-1];
					}
					else{
						cout<<input[digits-1];
					}
				}
			
			}
			
			
			if(digits == 2){
				if(input[digits-2] != '0'){
					cout<<input[digits-2];
					cout<<input[digits-1];
				}
				else{
					cout<<input[digits-1];
				}
			}

			
			if(digits == 1){
				cout<<input[digits-1];
			}
		
		}
		cout<<endl;
		
	}
	
	return 0;
}