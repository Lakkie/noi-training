#include <iostream>
using namespace std;
int main(){
	int a,b,c,na,nb,nc,pa,pb,pc,k,s=0;
	cin>>a>>b>>c>>na>>nb>>nc>>pa>>pb>>pc>>k;
	if(k*a<=na&&k*b<=nb&&k*c<=nc){
		cout<<"YES";
	}else{
		if(k*a>na){
			s+=(k*a-na)*pa;
		}
		if(k*b>nb){
			s+=(k*b-nb)*pb;
		}
		if(k*c>nc){
			s+=(k*c-nc)*pc;
		}
		cout<<"NO "<<s;
	}
	return 0;
}
