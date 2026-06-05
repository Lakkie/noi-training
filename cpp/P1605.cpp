#include<iostream>
using namespace std;
int n,m,t,sx,sy,fx,fy,ans=0;
//访问标记数组，同时也用于标记障碍物，1表示已访问或有障碍，0表示未访问且可通过。 
int vis[20][20];
//方向数组：分别代表下、上、右、左四个方向的坐标偏移量。 
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
void dfs(int x,int y){
	//如果当前坐标到达终点，路径数加1并返回。 
	if(x==fx&&y==fy){
		ans++;
		return;
	}
	//遍历四个方向。 
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>0&&nx<=n&&ny>0&&ny<=m&&!vis[nx][ny]){
			vis[nx][ny]=1;
			dfs(nx,ny);
			vis[nx][ny]=0;
		}
	}
}
int main(){
	cin>>n>>m>>t>>sx>>sy>>fx>>fy;
	//标记障碍物。  
	for(int i=0;i<t;i++){
		int x,y;
		cin>>x>>y;
		vis[x][y]=1;
	}
	//标记起点为已访问，防止走回头路。 
	vis[sx][sy]=1;
	//从起点开始进行深度优先搜索。 
	dfs(sx,sy);
	cout<<ans;
	return 0;
}
