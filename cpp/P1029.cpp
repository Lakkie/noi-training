#include<iostream>
using namespace std;
int gcd(int a,int b){
	while(b!=0){
		int t=b;
		b=a%b;
		a=t;
	}
	return a;
}
int main(){
	int x,y,c=0,p,q;
	cin>>x>>y;
	if(x==y){
		cout<<1<<endl;
		return 0;
	}
	for(p=x;p*p<=x*y;p+=x){
		if((x*y)%p==0){
			q=(x*y)/p;
			if(p<=q&&gcd(p,q)==x){
//				cout<<p<<" "<<q<<endl;
				if(p==q){
					c++;
				}else{
					c+=2;
				}
			}
		}
	}
	cout<<c<<endl;
	return 0;
}
