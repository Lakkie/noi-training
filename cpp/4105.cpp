#include <iostream>
using namespace std;
int main(){
	int n,x,y,r;
	cin>>n>>x>>y;
	//老鼠啃过了的书 
	if(y%x==0){
		r=y/x;
	}else{
		r=y/x+1;
	}
	cout<<n-r<<endl;
    return 0;
}
