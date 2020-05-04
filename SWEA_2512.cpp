#include <cstdio>
#include <algorithm>
using namespace std;

int value,num,arr[100001];

bool solve(int mid){
	
	int ret=0;
	for(int i=0;i<num;++i){
		// �� �׼����� ������ ���Ѿ��� �÷����鼭 �˻��ϴ°� 
		ret += min(mid,arr[i]);
	}
	
	return ( ret <= value );
	
}

int main(){
	
	int left=0,right=0;	
	scanf("%d",&num);
	for(int i=0;i<num;++i){
		scanf("%d",&arr[i]);
		right = max(right,arr[i]);
	}
	scanf("%d",&value);	
	while( left != right ){
		// mid�� ���Ѿ�  
		int mid = (left + right + 1) / 2;
		if(solve(mid)){ // ���Ѿ� �����ִٸ� �÷��� �ȴٸ� 
			left = mid; 
		}else{
			right = mid-1; // mid���ؼ� �ʉ����ϱ� -1���ֱ�  
		}
	}
	
	printf("%d\n",left);
	
	return 0;
}
