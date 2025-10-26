#include <iostream>
using namespace std;
int main(){
	int n,m;
	//n个事,m个连续,a个值。 
	cin>>n>>m;
	int a[n]; 
	//输入所有n个值。 
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int t,sum[n-m+1];
	//计算连续m个值之和。 
	for(int i=0;i<n-m+1;i++){ //统计顺序从第1个值开始，到第n-m+1个值结束。
		t=0;
		for(int j=i;j<i+m;j++){ //逐个计算连续值的和。
			t+=a[j];
		}
		sum[i]=t;
	}
	//判断最小值。 
	int min=sum[0];
	for(int i=0;i<n-m;i++){
		if(min>sum[i]){
			min = sum[i];
		}
	}
	cout<<min<<endl;
	return 0;
}
