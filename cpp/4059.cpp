#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,a,r=1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		bool f=0;//д╛хо 
		for(int x=1;x*x<a;x++){
			int y=sqrt(a-x*x);
			if(x*x+y*y==a){
				f=1;
				break;
			}
		}
		if(f==1){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
