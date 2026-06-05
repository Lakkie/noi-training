#include<iostream>
using namespace std;
bool ss(int n){//判断是不是素数。 
	if(n>=2){
		for(int i=2;i*i<=n;i++){
			if(n%i==0){
				return false;
			}
		}
		return true;
	}else{
		return false;
	}
}
bool hws(int n){//判断是不是回文数。 
	int t=n,s=0;
	while(t!=0){
		s=s*10+t%10;
		t=t/10;
	}
	if(s==n){
		return true;
	}else{
		return false;
	}
} 
int main(){
	int n,c=0;
	cin>>n;
	for(int i=11;i<=n;i++){
		if(ss(i)&&hws(i)){
			c++;
//			cout<<i<<endl;
		}
	}
	cout<<c;
	return 0;
} 
