#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bool f[n]={0};//用于存放是否存在某个“差的绝对值”，例如 f(0)=1代表存在差的绝对值为1的情况，f(n-2)=1代表存在n-1。 
	if(n==1){//特殊情况，只有一个数的时候。 
		cout<<"Jolly";
		return 0; 
	}else{
		for(int i=1;i<n;i++){
			int d=abs(a[i]-a[i-1]);//差的绝对值。 
			if(d>=1&&d<=n-1){
				f[d-1]=1;//将对应位置的值从默认的0改为1。 
			}
		}
	}
	for(int i=0;i<n-1;i++){
		if(f[i]==0){//循环检查，只要有一个f[i]还是0，就代表不符合条件。 
			cout<<"Not jolly";
			return 0;
		}
	}
	cout<<"Jolly";//如果循环后全部都是1，才能走到这一步。 
	return 0;
}
