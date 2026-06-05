#include<iostream>
using namespace std;
//b为输入的比例，k为输出的符合要求的数字，a[]记录已经枚举过的数字防止重复，f标记是否有解。 
int b1,b2,b3,k1=0,k2=0,k3=0,a[10]={0},f=0;
//深度优先搜索函数，x表示当前处理到第几位数字。 
void dfs(int x){
	//递归终止条件：已经处理完9个数字。 
  	if(x==9){
  		//验证后输出 
		if(k2*b1==b2*k1&&k3*b1==b3*k1){
			cout<<k1<<" "<<k2<<" "<<k3<<endl;
			f=1;//标记找到解。
			return;
		}
  	}
  	//尝试填入1-9中未使用的数字。 
  	for(int i=1;i<10;i++){
  		//判断数字i是否未被使用。 
		if(a[i]==0){
	      	if(x<=2){//前三位数字 
	      		k1=k1*10+i;
		  	}else if(x<=5){//中间三位数字 
		  		k2=k2*10+i;
			}else if(x<=8){//后三位数字
				k3=k3*10+i;
			}
	      	a[i]=1;//枚举过这个数后记录下来，防止再次枚举。
	      	//递归处理x的下一位
	      	dfs(x+1);
	      	//回溯（状态复原）
			if(x<=2){
	      		k1=k1/10;
			}else if(x<=5){
				k2=k2/10;
			}else if(x<=8){
				k3=k3/10;
			}
	      	a[i]=0;
	    }
  	}
}
int main(){
  	cin>>b1>>b2>>b3;
  	dfs(0);
  	if(f==0) {
  		cout<<"No!!!"<<endl;
  	}
  	return 0;
}

