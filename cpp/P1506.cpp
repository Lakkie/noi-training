#include<iostream>
using namespace std;
int n,m,ans=0,c=0;
//访问标记数组, 1表示不可访问，0表示可以访问。 
int vis[505][505]={0};
//方向数组：分别代表四个方向的坐标偏移量。 
int dx[4]={1,0,-1, 0};
int dy[4]={0,1, 0,-1};
//深度优先搜索。 
void dfs(int x,int y){
	//标记当前点。
	vis[x][y]=1;
	cout<<'('<<x<<','<<y<<')'<<endl; 
	//遍历四个方向。 
	for(int i=0;i<4;i++){
		c++;
		int nx=x+dx[i];
		int ny=y+dy[i];
		//如果新坐标可以访问。 (拓展边界法需要增加最外围一层地图宽度)
		if(nx>=0&&nx<=n+1&&ny>=0&&ny<=m+1&&vis[nx][ny]==0){
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
			//水淹不到，墙不可访问，因此标记为1。 
			if(c=='*'){
				vis[i][j]=1;
			}
		}
	} 
	//拓展边界法。 
    dfs(0,0); 
	//标记完成后，遍历所有坐标。 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			//没被洪水淹到的重要区域。 
			if(vis[i][j]==0){
				ans++; 
			}
		}
	}
	cout<<ans<<' '<<c<<endl;
}
