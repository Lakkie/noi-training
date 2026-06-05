#include<iostream>
using namespace std;	
int a[1005][1005]={0};
int main(){
	int n,x,y;
	cin>>n>>x>>y;
	int dx[]={1,-1,0,0};
	int dy[]={0,0,1,-1};
	for(int i=0;i<4;i++){
		if(x+dx[i]<n&&x+dx[i]>=0&&y+dy[i]<n&&y+dy[i]>=0){
			a[x+dx[i]][y+dy[i]]=1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}
