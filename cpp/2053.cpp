#include <iostream>
using namespace std;
int main(){
	int a[3];
	for(int i=0;i<3;i++){
		cin>>a[i];
	}
	//≈≈–Ú
	for(int i=0;i<2;i++){
		for(int j=0;j<2-i;j++){
			if(a[j]<a[j+1]){
				a[j]=a[j]+a[j+1];
				a[j+1]=a[j]-a[j+1];
				a[j]=a[j]-a[j+1];
			}
		}
	}
	// ‰≥ˆ
	for(int i=0;i<3;i++){
		cout<<a[i]<<' ';
	}
    return 0;
}
