#include <iostream>
using namespace std;
int main(){
	int n,sum_r=0,sum_c=0;
	cin>>n;
	bool a[n][n];
	//输入 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int t;
			cin>>t;
			a[i][j]=t;
		}
	}
	//记录行出错次数，列出错次数。 
	int flag_r=0,flag_c=0;
	//记录改变矩阵元素的坐标 
	int x,y; 
	//统计
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			sum_r+=a[i][j];
			sum_c+=a[j][i];
		} 
		if(sum_r%2!=0){
			flag_r+=1;
			x=i+1;
		}
		if(sum_c%2!=0){
			flag_c+=1;
			y=i+1;
		}
		sum_r=0;
		sum_c=0;
	}
	//符合条件 
	if((flag_r+flag_c)==0){
		cout<<"OK";
	//仅改变一个矩阵元素的情况下能符合条件
	}else if(flag_r==1&&flag_c==1){
		cout<<x<<" "<<y;
	}else{
		cout<<"Corrupt"; 
	}
	return 0;
}
