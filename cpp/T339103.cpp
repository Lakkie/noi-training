#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		//µü´ú·¨ 
		int k,a1=1,a2=2,a3;
		cin>>k;
		if(k<=2){
			cout<<k<<endl;
		}else{
			for(int j=3;j<=k;j++){
				a3=(2*a2+a1)%32767;
				a1=a2;
				a2=a3;
			}
			cout<<a2<<endl;		
		}
	}
	return 0;
} 
