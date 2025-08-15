#include <iostream>
using namespace std;
int main(){
	int n,t;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]%10<5){
			a[i]=a[i]-a[i]%10;
		}else{
			a[i]=a[i]+10-a[i]%10;
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<endl;
	}
    return 0;
}
