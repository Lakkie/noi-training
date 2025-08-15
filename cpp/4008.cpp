#include <iostream>
using namespace std;
int main(){
	int m,n;
	cin>>m;
	//第一层循环代表从第1个数字处理到第m个数字。 
	for(int i=1;i<=m;i++){
		cin>>n;
		//bt代表当前数字的位数，ct代表当前数字的各位数字N次方之和。 
		int bt=0,ct=0;
		//因为要处理多次，所以这里用一个临时变量存放输入的数字n 
		int t1=n;
		//统计位数
		while(t1>0){
			bt++;
			t1=t1/10;
		}
		int t2=n;
		//统计各位数字N次方之和
		while(t2>0){
			//当前数字
			int c=t2%10;
			int cn=1;
			//当前数字的bt次方。 
			for(int j=1;j<=bt;j++){
				cn=cn*c;
			}
			//bt次方之和
			ct=ct+cn;
			//下一位数字。 
			t2=t2/10;
		}
		//判断当前数字的最终效果
		if(ct==n){
			cout<<"T"<<endl;
		}else{
			cout<<"F"<<endl;
		}
	}
    return 0;
}
