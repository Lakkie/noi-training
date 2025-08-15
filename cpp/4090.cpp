#include <iostream>
using namespace std;
int main(){
	int n,a,c1=0,c2=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a; 
		if(a%2==0){
			c2++;
		}else{
			c1++;
		}
	}
	cout<<c1<<' '<<c2<<endl;
    return 0;
}
