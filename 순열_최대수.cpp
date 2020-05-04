#include <stdio.h>
#include <cstring>
using namespace std;

int arr[10] , n;

int solve(int cnt,int used,int val){
	if(cnt == 2){
		return val;
	}	
	
	int ret=-99;
	for(int i=0;i<n;++i){
		if( used & 1<<i ) continue;
			
		int tmp = solve(cnt+1,used|(1<<i),val*10+arr[i]);
		if(ret<tmp){
			ret = tmp;;
		}	
	}
	return ret;	
}

int main(){
											 //  2
	int tc;									 //  4 
	freopen("number_input1.txt","r",stdin) ; //  1 2 3 4
											 //  5
											 //  2 1 3 5 4
	scanf("%d",&tc);
	
	for(int i=0;i<tc;++i){
		
		scanf("%d",&n);
		for(int j=0;j<n;++j){
			scanf("%d",&arr[j]);
		}
		printf("#%d %d\n",i+1,solve(0,0,0));
		memset(arr,0,sizeof(arr));
	}
	
	return 0;
}
