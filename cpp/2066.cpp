#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int m,n;
	cin>>n>>m;
	float r=n-m*0.8;
	cout<<fixed<<setprecision(2)<<r<<endl;
    return 0;
}
