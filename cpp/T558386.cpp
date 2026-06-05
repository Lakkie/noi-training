#include<iostream>
using namespace std;
int main(){
	int n,m,l,r,k,c;
	string op;
	cin>>n>>m;
	int h[n]={0};
	for(int i=0;i<m;i++){
		c=0;
		cin>>op;
		if(op=="water"){
			cin>>l>>r;
			for(int j=l;j<=r;j++){
				h[j-1]+=1;
			}
		}else if(op=="rise"){
			cin>>l>>r>>k;
			for(int j=l;j<=r;j++){
				if(h[j-1]>=k){
					h[j-1]=0;
					c++;
				}
			}
			cout<<c<<endl;
		}
	}
	return 0;
}
