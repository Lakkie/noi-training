#include <iostream>
using namespace std;
int main(){
	int n,a,b,c=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		//超过8小时累积不高兴程度 
		if(a+b-8>=0){
			c=c+a+b-8;
		//未超过8小时（题目并未描述如何计算高兴程度，只有不高兴程度） 
		}else{
			
		}
		cout<<c<<endl;
	}
    return 0;
}
