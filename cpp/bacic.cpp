#include<iostream>
using namespace std;
int main(){
	int n=3;
	//单层循环 
	for(int i=0;i<n;i++){
		if(i==1){
			break;
		}
		cout<<"Cycle1 - "<<i<<endl;
	}
	for(int i=0;i<n;i++){
		if(i==1){
			continue;
		}
		cout<<"Cycle2 - "<<i<<endl;
	}
	
	//多层循环嵌套 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j==1){
				break;
			}
			cout<<"C3 L2 - "<<j<<endl;
		}
		cout<<"C3 L1 - "<<i<<endl;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j==1){
				continue;
			}
			cout<<"C4 L2 - "<<j<<endl;
		}
		cout<<"C4 L1 - "<<i<<endl;
	}
	return 0;
}
