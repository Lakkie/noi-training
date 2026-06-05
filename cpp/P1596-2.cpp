#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
const int MAXN=105;
int n,m,ans=0;
bool vis[MAXN][MAXN]={0};
//八邻域 
int dx[8]={ 1,1,1,-1,-1,-1,0, 0};
int dy[8]={-1,0,1,-1, 0, 1,1,-1};
struct position{
	int x,y,step;
};
int bfs(int xi,int yj){
	queue<position> q;
	position p0;
	p0.x=xi,p0.y=yj,p0.step=0;//起点位置
	q.push(p0);
	vis[xi][yj]=1;
	while(!q.empty()){
		position cp=q.front();//当前位置
		q.pop();
		for(int i=0;i<8;i++){
			position np;//下一步的位置 
			np.x=cp.x+dx[i],np.y=cp.y+dy[i];
			if(np.x>=1&&np.x<=n&&np.y>=1&&np.y<=m&&vis[np.x][np.y]==0){//坐标没有越界(边界拓展了)且不是墙也没有被访问过 
				np.step=cp.step+1;
				q.push(np);
				vis[np.x][np.y]=1;
			}
		}	
	}
	return -1;//如果无法到达 
}
int main(){
	//输入
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			char c;
			cin>>c;
			if(c=='.'){
				vis[i][j]=1;
			}
		}
	}
	//计算 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			//找到没有被标记的水。 
			if(vis[i][j]==0){
				ans++;
				bfs(i,j);
				cout<<"test "<<i<<" "<<j<<endl; 
			}
		}
	}
	//输出 
	cout<<ans;
	return 0;
}
