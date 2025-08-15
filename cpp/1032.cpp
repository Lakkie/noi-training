#include <iostream>
using namespace std;
int main(){
	int h,r;
	cin>>h>>r;
	//圆柱体体积公式: Π* r * r * h 
	double v=3.1*r*r*h;
	//1升=1000立方厘米 
	int t=20000/v;
	cout<<t+1<<endl;
    return 0;
}
