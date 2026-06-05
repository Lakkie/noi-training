#include<iostream>
using namespace std;
int gcd(long long a,long long b){
	while(b!=0){
		long long t=b;
		b=a%b;
		a=t;
	}
	return a;
}
int main()
{
	long long x,y,z;
	cin>>x>>y>>z;
	cout<<gcd(gcd(x,y),(z));
	return 0;
}
