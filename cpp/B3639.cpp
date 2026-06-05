#include<iostream>

using namespace std;
int main(){
	int m,n;
	cin>>n>>m;
	int a[n]={0};
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		//x位置的灯反转 
		if(a[x-1]==0){
			a[x-1]=1;
		}else{
			a[x-1]=0;
		}
		//x为1（最小值）的时候，x-1位置为n 
		if(x==1){
			if(a[n-1]==0){
				a[n-1]=1;
			}else{
				a[n-1]=0;
			}
		}else{
			if(a[x-2]==0){
				a[x-2]=1;
			}else{
				a[x-2]=0;
			}
		}
		//x=n（最大值）的时候，x+1位置为0 
		if(x==n){
			if(a[0]==0){
				a[0]=1;
			}else{
				a[0]=0;
			}			
		}else{
			if(a[x]==0){
				a[x]=1;
			}else{
				a[x]=0;
			}			
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<' '; 
	}
	return 0;
}

