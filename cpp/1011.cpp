#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double a,b;
	cin>>a>>b;
	double c=b/a*100;
	cout<<fixed<<setprecision(3)<<c<<"%"<<endl;
    return 0;
}
