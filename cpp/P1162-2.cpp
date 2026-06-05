#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
const int MAXN=35;
int n;
bool map[MAXN][MAXN],vis[MAXN][MAXN];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
struct position{
	int x,y,step;
};
int bfs(){
	queue<position> q;
	position p0;
	p0.x=0,p0.y=0,p0.step=0;//起点位置（拓展边界法）
	q.push(p0);
	vis[0][0]=true;
	while(!q.empty()){
		position cp=q.front();//当前位置
		q.pop();
		for(int i=0;i<4;i++){
			position np;//下一步的位置 
			np.x=cp.x+dx[i],np.y=cp.y+dy[i];
			if(np.x>=0&&np.x<=n+1&&np.y>=0&&np.y<=n+1&&map[np.x][np.y]!=1&&vis[np.x][np.y]==false){//坐标没有越界(边界拓展了)且不是墙也没有被访问过 
				np.step=cp.step+1;
				q.push(np);
				vis[np.x][np.y]=true;
			}
		}	
	}
	return -1;//如果无法到达 
}
int main(){
	cin>>n;
    memset(map,0,sizeof(map));
    memset(vis,false,sizeof(vis));
	//输入
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>map[i][j];	 
		}
	}
	//计算 
    bfs();
	//输出
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(map[i][j]==0&&vis[i][j]==false){
				cout<<2<<' '; 
			}else{
				cout<<map[i][j]<<' ';
			}
		}
		cout<<endl;
	}
	return 0;
}
