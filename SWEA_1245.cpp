#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;
double x_pos[10];
double weight[10];

int main(){
	
	cout << fixed; // �Ҽ��� �Ʒ��� 10�ڸ� ������
	// fixed���ϸ� ����,�Ҽ��� �����ؼ� 10�ڸ� �� 
	cout.precision(10);
	
	int tc=0;
	scanf("%d",&tc);
	int N=0,left=0,right=0;
	for(int i=0;i<tc;++i){	
		int N=0;
		cin >> N;
		
		for(int j=0;j<N;++j){
			cin >> x_pos[j];
		}
		for(int j=0;j<N;++j){
			cin >> weight[j];
		}
		
		printf("#%d",i+1);	
		for(int j=1;j<N;++j){
			double left = x_pos[j-1], right = x_pos[j];
			double mid = ( left + right ) / 2.0;	
			double sum = 0;
			int cnt=1;
			while(true){
				mid = ( left + right ) / 2.0;
				sum = 0;
				for(int a=0;a<j;++a){
					sum += weight[a] / ((mid-x_pos[a])*(mid-x_pos[a]));				}
				for(int a=j;a<N;++a){
					sum -= weight[a] / ((x_pos[a]-mid)*(x_pos[a]-mid)); 
				}
				if( sum == 0) break;
				
				if( sum > 0){
					left = mid;
				}	
				else{
					right = mid;
				}
				
				if( (++cnt) >50) break;
			}
			cout << " " << mid;
		}
		printf("\n");			

	}	
	return 0;
}
