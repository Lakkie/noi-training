#include<iostream>
using namespace std;
//cnt可以拆分的因子个数 
int n,cnt=0,a[10]; 
void dfs(int factor,int number){//factor拆分因子，number被拆分的数字。 
	//输出匹配的全部拆分因子。 
	if(number==0){
		cout<<a[0];
		for(int i=1;i<cnt;i++){
			cout<<'+'<<a[i];
		}
		cout<<endl;
		return;
	}
	if(factor==n){//输入的数值本身不能被拆分为两个数相加。 
		return;
	}
	if(factor>number){//从1开始拆，拆分因子不能比被拆分的数字数值大。 
		return;
	}
	//保存满足条件的拆分因子。 
	a[cnt++]=factor;
	//选当前的factor
	dfs(factor,number-factor);
	//不选当前的factor
	cnt--; 
	dfs(factor+1,number);
}
int main(){
	cin>>n;//输入 
	dfs(1,n);//从1开始拆 
	return 0;
}
