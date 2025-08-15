#include <iostream>
using namespace std;
int main(){
	int n,a;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		int s=0;
		while(a!=0){
			s=s+a%10;
			a=a/10;
		}
		if(s%7==0){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
