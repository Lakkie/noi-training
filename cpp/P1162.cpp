#include<iostream>
using namespace std;
int n;
//记录数组。 
int vis[35][35]={0};
//方向数组：分别代表下、上、右、左四个方向的坐标偏移量。 
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
//深度优先搜索 
void dfs(int x,int y){
	//外围的数字0，临时标记为其他数字。 
	vis[x][y]=6;
	//遍历四个方向。
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		//如果新坐标没有超过地图边界，且数值为0。(拓展边界法需要增加最外围一层地图宽度)
		if(nx>=0&&nx<=n+1&&ny>=0&&ny<=n+1&&vis[nx][ny]==0){
			//搜索这个坐标。
			dfs(nx,ny);
		}
	}
}
int main(){
	cin>>n;
	//输入。  
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>vis[i][j];		 
		}
	}
	//拓展边界法。 
    dfs(0,0);
	//输出。
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(vis[i][j]==6){
				cout<<0<<' '; 
			}else if(vis[i][j]==0){
				cout<<2<<' '; 
			}else{
				cout<<vis[i][j]<<' ';
			}
		}
		cout<<endl;
	}
	return 0;
}
