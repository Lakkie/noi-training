#include<iostream>
using namespace std;
int main(){
	int h,u,d,k=0,s=0;
	cin>>h>>u>>d;
	if(1000>=h&&h>=u&&u>=d&&d>=1){//实际工作中需要限制 
		while(true){//实际工作中，禁止出现死循环 
			k++;
			s+=u;
			if(s>=h){
				break;
			}
			s-=d;
		}
	}
	cout<<k;
	return 0;
}

