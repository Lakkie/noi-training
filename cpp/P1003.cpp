#include <iostream>
using namespace std; 
int main(){
	//输入 
	int n;
	cin>>n;
	int a[n],b[n],g[n],k[n];
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	}
	int x,y;
	cin>>x>>y;
	int r=-1;
	//地毯编号为i+1 
	for(int i=0;i<n;i++){
		//在地毯覆盖范围内 
		if(x>=a[i]&&x<=(a[i]+g[i])&&y>=b[i]&&y<=(b[i]+k[i])){
			r=i+1;
		}
	}
	cout<<r;
	return 0;
}
