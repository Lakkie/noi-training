#include <iostream>
using namespace std;
int main(){
	int s=0,k,d=1;
	cin>>k;
	//使用一阶等差数列公式缩小外层循环次数 
	for(int i=0;i*(i+1)/2<=k;i++){
		//cout<<"第"<<i+1<<"轮"<<endl; 
		//每连续的i+1天，每天获取i+1个金币 
		for(int j=0;j<=i;j++) {
			if(d>k) break;
			//cout<<"第"<<j+1<<"次"<<endl; 
			s+=i+1;
			d++;
		}
	}
	cout<<s<<endl;
	return 0;
}
