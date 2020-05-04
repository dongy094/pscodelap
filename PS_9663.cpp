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
		
			map[i] = j; // row+1��, i���� ���� �� �� ����
			if( check( i ) ){ // ������ġ�� ���� �� �ִٸ� 
				solve( i+1 );
			}
			
			/*else{
				map[row] = 0; // ������ ���� �ش� ��ġ��x�� ������0 ���� ����� 
			} ��Ŵ� ���� �����̸鼭 ����ؼ� �ش��ڸ��� ���ο�
			��ġ�� �־�鼭 �ٲ��. 
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
