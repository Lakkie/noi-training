#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	double x1,y1,x2,y2,x3,y3,s;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	s=0.5*abs((x1-x3)*(y2-y1)-(x1-x2)*(y3-y1));
	cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}
