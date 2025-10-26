#include <iostream>
using namespace std;
//判断两个数是否亲和数 
bool is_qhs(int a, int b){
	int sum_a=0,sum_b=0; 
	for(int i=1;i<=a/2;i++){
		if(a%i==0){
			sum_a+=i;
		}
	}
	for(int i=1;i<=b/2;i++){
		if(b%i==0){
			sum_b+=i;
		}
	}
	if(sum_a==b&&sum_b==a){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		bool flag = is_qhs(a,b);
		if(flag){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	} 
    return 0;
}

