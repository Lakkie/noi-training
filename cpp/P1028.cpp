#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int f[1001]={0};//f[i]表示以i结尾的合法数列个数。 
	//动态规划 
	for(int i=1;i<=n;i++){
		//包含i本身的数列，至少算有一个。
		f[i]=1;
		//添加所有可能的后续队列个数。 
		for(int j=1;j<=i/2;j++){
			f[i]+=f[j];
		} 
	}
	cout<<f[n]<<endl; 
    return 0;
}
