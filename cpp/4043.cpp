#include <iostream>
using namespace std;
int main(){
	int n,a,r=1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		r=r*a;
	}
	if(r<=1000000){
		cout<<r<<endl;
	}else{
		cout<<">1000000"<<endl;
	}
	return 0;
}
