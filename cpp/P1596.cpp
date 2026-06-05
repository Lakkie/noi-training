#include<iostream>
using namespace std;
int n,m,ans=0;
//访问标记数组，同时也用于标记障碍物，1表示已访问或有障碍，0表示未访问且可通过。 
int vis[105][105]={0};
//方向数组：分别代表八个方向的坐标偏移量。 
int dx[8]={ 1,1,1,-1,-1,-1,0, 0};
int dy[8]={-1,0,1,-1, 0, 1,1,-1};
void dfs(int x,int y){
	//标记当前点。
	vis[x][y]=1;
	//遍历八个方向。 
	for(int i=0;i<8;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>0&&nx<=n&&ny>0&&ny<=m&&vis[nx][ny]==0){
			dfs(nx,ny);//搜索下一个点。 
		}
	}
}
int main(){
	cin>>n>>m;
	//输入。
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			char c;
			cin>>c;
			if(c=='.'){
				vis[i][j]=1;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			//找到没有被标记的水。 
			if(vis[i][j]==0){
				ans++;
				dfs(i,j);
			}
		}
	}
	cout<<ans;
	return 0;
}
