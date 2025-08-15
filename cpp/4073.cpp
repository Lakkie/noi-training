#include <iostream>
using namespace std;
int main(){
	int n,c=0;
	int a[n];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
		if(a[i]%9==0&&a[i]%8!=0){
			c++;
		}
	}
	cout<<c<<endl;
    return 0;
}
