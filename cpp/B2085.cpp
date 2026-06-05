#include<iostream>
using namespace std;
bool isPrimy(int p){
	bool f=true;
	if(p<=1){
		f=false;
	}else{
		for(int i=2;i*i<=p;++i){
			if(p%i==0){
				f=false;
				break;
			}
		}
	}
	return f;
}
int main(){
	int n,k=0,i=2;
	cin>>n;
	while(k<n){
		if(isPrimy(i)){
			k++;
		}
		if(k==n){
			cout<<i;
			break;
		}
		i++;
	}
	return 0;
} 
