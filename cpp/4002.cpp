#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,c=0;
	cin>>n;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			c++;
		}
	}
	cout<<c<<endl;
    return 0;
}
