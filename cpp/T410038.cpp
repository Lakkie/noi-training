#include<iostream>
using namespace std;
int akm(int m,int n){
	if(m==0){
		return n+1;
	}else if(m>0){
		if(n==0){
			return akm(m-1,1);
		}else if(n>0){
			return akm(m-1,akm(m,n-1));
		}else{
			// do nothing.
		}
	}else{
		// do nothing.
	}
	return 0;
}
int main(){
	int m,n;
	cin>>m>>n;
	cout<<akm(m,n);
	return 0;
} 
