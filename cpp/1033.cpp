#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	double xa,ya,xb,yb;
	cin>>xa>>ya>>xb>>yb;
	double d=sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya));
	cout<<fixed<<setprecision(3)<<d<<endl;
    return 0;
}
