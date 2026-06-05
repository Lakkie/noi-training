#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<=n;i++){
		int a;
		cin>>a;
		if(a!=0){
			//处理符号
			if(i!=0){
				if(a>0){
					cout<<'+';
				}
			}else{
				//do nothing.
			}
			//处理系数
			if(i!=n){
				if(a==1){
					//do nothing.
				}else if(a==-1){
					cout<<'-'; 
				}else{
					cout<<a; 
				}
			}else{
				cout<<a;
			}
			//处理项 
			if(i==n){
				//do nothing.
			}else if(i==n-1){
				cout<<'x';
			}else{
				cout<<"x^"<<n-i;
			}
		}else{
			//do nothing
		} 
	}
	return 0;
}
