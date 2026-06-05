#include<iostream>
using namespace std;
//高精度数值运算 
int a[5001][5001]={0};//用于存储高精度数字。a[i][j]表示第i个数的第j位数字。 
int main(){
	//输入 
	int n,x=1;//x代表当前的最高位数。 
	cin>>n;
	//递归：初始化最前两个数值 
	a[1][1]=1;
	a[2][1]=2;
	for(int i=3;i<=n;i++){
		//递归：将前两个数相加
		for(int j=1;j<=x;j++){
			a[i][j]=a[i-1][j]+a[i-2][j];
		}
		//高精度数值运算：处理进位
		for(int j=1;j<=x;j++){
			if(a[i][j]>9){
				a[i][j+1]+=a[i][j]/10;//向高位进位
				a[i][j]%=10;//当前位保留个位数
				if(a[i][x+1]>0){//如果最高位有值，说明位数增加了一位。 
					x++;
				}
			}
		}
	}
	//从高位到低位输出第n个数
	for(int i=x;i>=1;i--){
		cout<<a[n][i];
	}
	return 0;
}
