#include<iostream>
using namespace std;
int main(){
	int n,m;
	while(cin>>n>>m){
		if(n==0&&m==0){
			break;
		}
		int a[n+1];
		a[n]=0;
		//输入原数组n个
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		//处理n+1次
		for(int i=0;i<=n;i++){
			if(m<=a[i]){
				int t=a[i];
				a[i]=m;
				m=t;
			}else if(a[i]==0){
				a[i]=m;
			}
		}
		for(int i=0;i<n+1;i++){
			cout<<a[i]<<" ";
		}
	}
	return 0;
}
