#include<iostream>
using namespace std; 
int main(){
	int n=1;
	while(n){
		cin>>n;
		if(n==0){
			break;
		}
		//迭代法 
		int a1=0,a2=0,a3=0,a4=1;//分别代表1年母牛，2年母牛，3年母牛和4年以上母牛的数量。 
		for(int i=2;i<=n;i++){
			a4+=a3;
			a3=a2;
			a2=a1;
			a1=a4;
//			cout<<a1<<"-"<<a2<<"-"<<a3<<"-"<<a4<<endl;
		}
		cout<<a1+a2+a3+a4<<endl;		
	}
	return 0;
} 
