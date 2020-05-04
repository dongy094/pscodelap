#include <iostream>
#include <cmath>
using namespace std;

int map[16];
int n;
int ans=0;

bool check(int i){
	
	for(int j=0 ; j<i ; j++){
		
		if( map[j] == map[i] || abs(map[i]-map[j] == i-j )){
			return false;
		}
		
	}
	return true;
}

bool solve(int i){

	if( n == i ){
		ans +=1;
		
	}else{
		
		for(int j=0 ; j<n ; j++){
		
			map[i] = j; // row+1행, i열에 현재 퀸 을 놓음
			if( check( i ) ){ // 다음위치에 놓을 수 있다면 
				solve( i+1 );
			}
			
			/*else{
				map[row] = 0; // 조건을 통해 해당 위치에x면 원상태0 으로 만들기 
			} 요거는 퀸이 움직이면서 계속해서 해당자리에 새로운
			위치를 넣어가면서 바뀐다. 
			*/ 
		
		}
	}
	
}



int main(){
	
	  
	cin >> n;
	solve(0);
	cout << ans;
		
	return 0;
}
