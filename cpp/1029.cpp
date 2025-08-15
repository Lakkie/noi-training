#include <iostream>
using namespace std;
int main(){
	double a,b,r;
	int k;
	cin>>a>>b;
	k=int(a/b);
	r=a-b*k;
	cout<<r<<endl;
    return 0;
}
