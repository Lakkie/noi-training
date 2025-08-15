#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double a,b;
	cin>>a>>b;
	cout<<fixed<<setprecision(2)<<1/(1/a+1/b)<<endl;
    return 0;
}
