#include<iostream>
using namespace std;
int main(){
	int n,c=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int t=i,t0=0,t1=0;
		while(t!=0){
			if(t%2==1){
				t1++;
			}else{
				t0++;
			}
			t=t/2;
		}
		if(t1>t0){
			c++;
		}
	}
	cout<<c<<" "<<n-c<<endl;
	return 0;
}
