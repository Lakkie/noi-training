#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	short a,b,x,y;
	cin>>x>>a>>y>>b;
	float r=(b*y-a*x)/(b-a);
	cout<<fixed<<setprecision(2)<<r<<endl;
    return 0;
}
