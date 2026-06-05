#include<iostream>
#include<queue>
using namespace std;
int main(){
	int a[100]={0}, i=0;
	while(true){
		cin>>a[i];
		if(i>=100||a[i]==0) break;
		i++; 
	}
	for(int j=i-1;j>=0;j--){
		cout<<a[j]<<' '; 
	}
	return 0;
}
