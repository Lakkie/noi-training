#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double w,p;
	cin>>w;
	if(w<=20){
		p=w*1.68;
	}else{
		p=w*1.98;
	}
	cout<<fixed<<setprecision(2)<<p<<endl;
    return 0;
}
