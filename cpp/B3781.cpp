#include<iostream>
using namespace std;
int main(){
	//输入 
    long long n;
    cin>>n; 
    //计算并输出 
    long long a=n;
    int p=0;
	for(long long i=2;i*i<=n;i++){
		if(a%i==0){
			int s=0;
			while(a%i==0){
				a/=i;
				s++; 
			}
			if(p){
				cout<<"* ";
			}
			if(s!=1){
				p=1;
				cout<<i<<"^"<<s<<" ";
			}else{
				p=1;
				cout<<i<<" ";
			}	
		} 
	}
	if(a!=1){
		if(a!=n){
			cout<<"* "<<a; 
		}else{
			cout<<a; 
		}
		
	}
    return 0;
}
