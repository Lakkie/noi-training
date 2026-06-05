#include<iostream>
#include<algorithm>
using namespace std;
//最大公约数 
int gcd(int a,int b){
	while(b!=0){
		int t=b;
		b=a%b;
		a=t;
	}
	return a;
}
//最小公倍数 
int lcm(int a,int b){
	return (a/gcd(a,b))*b;//最小公倍数×最大公约数=a×b 
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<" - "<<lcm(a,b);
} 
