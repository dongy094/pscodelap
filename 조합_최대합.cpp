#include <cstdio>
#include <cstring>
using namespace std;

int arr[10], n;

int solve(int pos, int cnt, int val){
	if(cnt == 2) return val;
	if(pos == n) return -1;
	
	int ret=-99, tmp;
	tmp = solve(pos+1,cnt+1,val+arr[pos]); // 해당 숫자를 뽑고 
	if(tmp>ret)
		ret = tmp;
		
	tmp = solve(pos+1,cnt,val);  // 해당 숫자를 않뽑고 
	if(tmp>ret)
		ret = tmp;
	
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
