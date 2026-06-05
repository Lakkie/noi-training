#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		int s=n+5;
		int a[s]={0},b[50000]={0};
		for(int j=1;j<=n;j++){
			cin>>a[j];
			b[a[j]]=1;
		}
		for(int j=1;j<=n;j++){
			if(b[a[j]]==1){
				cout<<a[j]<<" ";
				b[a[j]]=0;
			}
		}
		cout<<endl;
	}
	return 0;
}
