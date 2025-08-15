#include <iostream>
#include <iomanip>
using namespace std;
int main(){ 
	double a[5];
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	cout<<fixed<<setprecision(7)<<a[1]*a[0]*a[0]*a[0]+a[2]*a[0]*a[0]+a[3]*a[0]+a[4]<<endl;
    return 0;
}
