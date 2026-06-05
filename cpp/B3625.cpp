#include<iostream>
using namespace std;
//地图大小 n ×m，可以到达终点的路径数量。 
int n,m,ans=0;
//访问标记数组，1表示不可访问（已访问或有障碍），0表示可以访问。  
int vis[105][105];
//上下左右位置的相对坐标。
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
//深度优先搜索 
void dfs(int x,int y){
	//搜索到达终点。 
	if(x==n&&y==m){
		ans++;
		return;
	}
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		//新坐标是否在地图范围内，且可以访问。 
		if(nx>0&&nx<=n&&ny>0&&ny<=m&&vis[nx][ny]==0){
			vis[nx][ny]=1;
			dfs(nx,ny);
			// vis[nx][ny]=0; //在只需要求是否可行的本题中，不用回溯，不然会TLE。 
		}
	}
}
int main(){
	cin>>n>>m;
	//标记障碍物。 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			char x;
			cin>>x;
			if(x=='#'){
				vis[i][j]=1;
			}
		}
	}
	//从初始点开始搜索。 
	dfs(1,1);
	if(ans>0){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
	return 0;
}
