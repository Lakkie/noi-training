#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int c[7]={0};
	int a[n+1][7];
	for(int i=0;i<=n;i++){
		for(int j=0;j<7;j++){
			cin>>a[i][j];
		}
	}
	//每张彩票查一次中奖情况 
	for(int i=1;i<=n;i++){
		int ci=0;
		//当前彩票号码 a[i][j]
		for(int j=0;j<7;j++){
			//中奖号码 a[0][k]
			for(int k=0;k<7;k++){
				if(a[0][k]==a[i][j]) ci++;
			}
		}
		//ci=7代表7个全中的特等奖，放c[0] 
		//ci=6代表一等奖，放c[1] 
		if(ci!=0) c[7-ci]+=1;	
	}
	for(int i=0;i<7;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
