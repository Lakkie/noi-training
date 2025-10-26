#include <iostream>
using namespace std;
int main()
{
	double h,r,n,t,p=3.1415926;
	cin>>h>>r;
	n=(r+r)*p*h;
	t=2/n;
	if(2%n!=0){
		t++;
	}
	cout<<t<<endl;
	return 0;
}
