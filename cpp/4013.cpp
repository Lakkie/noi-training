#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,r;
	cin>>a>>b>>c>>d;
	r=d-a*2-b*5-c*3;
	if(r>=0){
		cout<<"Yes"<<endl;
		cout<<r<<endl;
	} else{
		cout<<"No"<<endl;
		cout<<r*-1<<endl;
	}
    return 0;
}
