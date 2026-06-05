#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	double n,m,s=0;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		s+=n;
		n=sqrt(n);
	}
	cout<<fixed<<setprecision(2)<<s<<endl;
	return 0;
}
