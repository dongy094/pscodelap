#include <cstdio>
#include <vector>
using namespace std;

int main(){
	
	int TestCase;
	int num=0,pos;
	scanf("%d",&TestCase);
	
	for(int i=0;i<TestCase;i++){
		
		scanf("%d",&num); 
		vector<int> arr(101,0); //���� ���� �迭 100������ 1~100��	
		for(int j=0;j<1000;j++){ //�л��� ������ �迭�� �ֱ� 
			int temp=0;
			scanf("%d",&temp); //�����Է�
			arr[temp]++;  //���� ��+1 
		}
		
		int maxN=-9999;
		
		pos = 0; //�ֺ� ��ġ �˷��� ���� 
		for(int t=1;t<101;t++){ //�л���, �ֺ� ���ϱ� 1��~100�� ���� ���鼭 �ֺ� ã�� 
			if( arr[t] >= maxN ){
				maxN = arr[t];
				pos = t; 
			}
		}
	
		printf("#%d %d\n",num,pos);
		num++;
	}
	return 0;
}
