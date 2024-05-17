#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

//c++中數組都盡量改用vector，傳參才不容易出錯

int f(int p_x, int p_y, char d, int world_x, int world_y, vector<vector<int>>& world){
	string input;
	stringstream ss;
	
	getline(cin, input);
	ss<<input;
		
	for(int i = 0; i < input.size(); i++){
		if(input[i] == 'F'){
			if(d == 'N'){
				p_y++;
			}
			else if(d == 'S'){
				p_y--;
			}
			else if(d == 'W'){
				p_x--;
			}
			else if(d == 'E'){
				p_x++;
			}
			
			if(p_x < 0){
				p_x++;
				if(world[p_x][p_y] == 0){
					world[p_x][p_y] = 1;
					cout<<p_x<<" "<<p_y<<" "<<(char)d<<" LOST"<<endl;
					return 0;
				}
				else{
					world[p_x][p_y] = 1;
				}
			}
			else if(p_x > world_x){
				p_x--;
				if(world[p_x][p_y] == 0){
					world[p_x][p_y] = 1;
					cout<<p_x<<" "<<p_y<<" "<<(char)d<<" LOST"<<endl;
					return 0;
				}
				else{
					world[p_x][p_y] = 1;
				}
			}
			else if(p_y < 0){
				p_y++;
				if(world[p_x][p_y] == 0){
					world[p_x][p_y] = 1;
					cout<<p_x<<" "<<p_y<<" "<<(char)d<<" LOST"<<endl;
					return 0;
				}
				else{
					world[p_x][p_y] = 1;
				}
			}
			else if(p_y > world_y){
				p_y--;
				if(world[p_x][p_y] == 0){
					world[p_x][p_y] = 1;
					cout<<p_x<<" "<<p_y<<" "<<(char)d<<" LOST"<<endl;
					return 0;
				}
				else{
					world[p_x][p_y] = 1;
				}
			}
		}
		else if(input[i] == 'L'){
			if(d == 'N'){
				d = 'W';
			}
			else if(d == 'S'){
				d = 'E';
			}
			else if(d == 'W'){
				d = 'S';
			}
			else if(d == 'E'){
				d = 'N';
			} 
		}
		else if(input[i] == 'R'){
			if(d == 'N'){
				d = 'E';
			}
			else if(d == 'S'){
				d = 'W';
			}
			else if(d == 'W'){
				d = 'N';
			}
			else if(d == 'E'){
				d = 'S';
			} 
		}	
	}
	cout<<p_x<<" "<<p_y<<" "<<(char)d<<endl;
	return 0;
}

int main(){
	string input;
	stringstream ss;
	int world_x, world_y;
	int p_x, p_y;
	char d;
	
	getline(cin, input);
	ss<<input;
	ss>>world_x>>world_y;
	
	vector<vector<int>> world;
	for(int i = 0; i < world_x + 1; i++){
		world.push_back(vector<int>{});
		for(int j = 0; j < world_y + 1; j++){
			world[i].push_back(0);
		}
	}
	
	while(getline(cin, input)){
		if(input != ""){
			ss.clear();
			ss.str("");
			ss<<input;
			ss>>p_x>>p_y>>d;
			
			f(p_x, p_y, d, world_x, world_y, world);
		}
	}
	return 0;
}
