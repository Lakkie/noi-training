#include <iostream>
using namespace std;
int main(){
	int n,c=0;
	cin>>n;
	for(int a=1;a<=n;a++){
		for(int b=1;b<=a;b++){
			if((a*b)%2==0){
				c++;
			} 
		}
	}
	cout<<c<<endl;
    return 0;
}
