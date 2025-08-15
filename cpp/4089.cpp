#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double k,c,f;
	cin>>k;
	c=k-273.15;
	f=c*1.8+32;
	if(f>212){
		cout<<"Temperature is too high!"<<endl;
	}else{
		cout<<fixed<<setprecision(2)<<c<<' '<<f<<endl;
	}
    return 0;
}
