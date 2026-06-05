#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int a[n];
		if(n==0){
			break;
		}
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++){
			for(int j=0;j<n-1-i;j++){
				if(abs(a[j])<abs(a[j+1])){
					int temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
