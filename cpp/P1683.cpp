#include<iostream>
using namespace std;
int w,h,x0,y0,ans=1;
//访问标记数组，同时也用于标记障碍物，1表示已访问或有障碍，0表示未访问且可通过。 
int vis[25][25]={0};
//方向数组：分别代表下、上、右、左四个方向的坐标偏移量。 
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
void dfs(int x,int y){
	//遍历四个方向。 
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		//如果新坐标没有超过地图边界，且可以访问。 
		if(nx>0&&nx<=h&&ny>0&&ny<=w&&vis[nx][ny]==0){
			//搜索完成就标记。 
			vis[nx][ny]=1;
			ans++;
			dfs(nx,ny);
		}
	}
}
int main(){
	cin>>w>>h;
	//输入。  
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			char c;
			cin>>c;
			if(c=='#'){
				vis[i][j]=1;
			}else if(c=='@'){
				vis[i][j]=1;
				x0=i;
				y0=j;
			} 
		}
	}
	//从起点开始进行深度优先搜索。 
	dfs(x0,y0); 
	cout<<ans; 
	return 0;
}
