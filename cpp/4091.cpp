#include <iostream>
using namespace std;
int main(){
	int t,a;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>a;
		bool f=false;
		for(int j=2;j<a;j++){
			if(j*j*j*j==a){
				f=true;
				cout<<j<<endl;
				break;
			}
		}
		if(f==false){
			cout<<-1<<endl;
		}
	}
	return 0;
}
