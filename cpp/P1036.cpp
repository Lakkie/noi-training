#include<iostream>
using namespace std;
int n,k,a[30],sum=0,c=0;
long long b[30]; 
bool isPrime(int sum){
   	if(sum<2){
   		return false;
   	}//0和1不是质数
   	if(sum==2){
	   	return true;
	}//2是质数
   	for(int i=2;i<=sum/i;i++){
    	if(sum%i==0){
	   		return false;
	   	}//非质数
   	}
   return true;//是质数
}
void dfs(int h,int num){//第h个位置填数组的第num项 
	if(h>k){//位置边界
		sum=0;
		for(int i=1;i<=k;i++){
			sum+=b[a[i]];
		}
		if(isPrime(sum)){
			c++;
		}
		return;
	}
	if(num>n){//数组边界
		return;
	}
	//选
	a[h]=num;
	dfs(h+1,num+1);
	//不选
	a[h]=0;
	dfs(h,num+1);
}
int main(){
	cin>>n>>k;//输入
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	dfs(1,1);//从第一个1位置放数组第一项开始
	cout<<c;
	return 0;
}
