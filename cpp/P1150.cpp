#include <iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	//c代表换的次数 
	int c=0,t=n;
	while(t>=k){
		//每次扣掉k个，换来1个 
		t+=1-k;
		c++;
	}
	cout<<n+c; 
	return 0;
}
