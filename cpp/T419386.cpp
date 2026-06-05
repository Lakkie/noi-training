#include <iostream>
using namespace std;
int main(){
	string hx,dw;
	cin>>hx>>dw;
	int hxn=1,dwn=1;
	for(int i=0;i<hx.size();i++){
		int a=hx[i]-64;
		hxn*=a;
	}
	for(int i=0;i<dw.size();i++){
		int b=dw[i]-64;
		dwn*=b;
	}
	if((hxn%47)==(dwn%47)){
		cout<<"GO";
	}else{
		cout<<"STAY";
	}
	return 0;
}
