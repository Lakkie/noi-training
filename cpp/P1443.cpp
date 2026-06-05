#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
const int MAXN=405;
int n,m,x,y,ans[MAXN][MAXN];
//马的8个可达位置 
int dx[8]={ 1, 2, 2, 1,-1,-2,-2,-1};
int dy[8]={-2,-1, 1, 2, 2, 1,-1,-2};
struct position{
	int x,y,step;
};
int bfs(){
	memset(ans,-1,sizeof(ans));
	ans[x][y]=0;
	queue<position> q;
	position p0;
	p0.x=x,p0.y=y,p0.step=0;//起点位置 
	q.push(p0);
	while(!q.empty()){
		position cp=q.front();//当前位置
		q.pop();
		for(int i=0;i<8;i++){
			position np;//下一步的位置 
			np.x=cp.x+dx[i],np.y=cp.y+dy[i];
			if(np.x>=1&&np.x<=n&&np.y>=1&&np.y<=m&&ans[np.x][np.y]==-1){//坐标没有越界
				ans[np.x][np.y]=ans[cp.x][cp.y]+1; 
				np.step=cp.step+1;
				q.push(np);
			}
		}
	}
	return -1;//如果无法到达 
}
int main(){
	//输入
	cin>>n>>m>>x>>y;
	//计算
	bfs();
	//输出
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<ans[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
