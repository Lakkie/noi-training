#include <iostream>
using namespace std;

int fib(int n){
    if(n==0){
    	return 0;
	}else if(n==1||n==2){
    	return 1;
	}
    return fib(n-1)+fib(n-2);
}

int main(){
	int a,b,m,n,s,t;
	cin>>a>>b>>m>>n;
	s=a+b;
	for(int i=3;i<=n;i++){
		int an=fib(i-2);
		int bn=fib(i-1);
		t=a*an+b*bn;
		s+=t;
		if(t>=m){
			break;
		}
	}
	cout<<s;
	return 0;
}

