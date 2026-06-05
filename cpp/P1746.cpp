#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
const int MAXN=1005;
int n,x1,y1,x2,y2;
bool map[MAXN][MAXN],vis[MAXN][MAXN];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
struct position{
	int x,y,step;
};
int bfs(){
	memset(vis,false,sizeof(vis));
	queue<position> q;
	position p0;
	p0.x=x1,p0.y=y1,p0.step=0;//起点位置 
	q.push(p0);
	vis[x1][y1]=true;
	while(!q.empty()){
		position cp=q.front();//当前位置
		q.pop();
		if(cp.x==x2&&cp.y==y2){//到达目的地 
			return cp.step;
		}else{
			for(int i=0;i<4;i++){
				position np;//下一步的位置 
				np.x=cp.x+dx[i],np.y=cp.y+dy[i];
				if(np.x>=1&&np.x<=n&&np.y>=1&&np.y<=n&&map[np.x][np.y]!=1&&vis[np.x][np.y]!=1){//坐标没有越界且不是店铺 
					vis[np.x][np.y]=true;
					np.step=cp.step+1;
					q.push(np);
				}
			}
		} 
	}
	return -1;//如果无法到达 
}
int main(){
	//输入
	cin>>n;
	for(int i=1;i<=n;i++){
		string row;
        cin>>row;
		for(int j=1;j<=n;j++){
			map[i][j]=row[j-1]-'0';
		}
	}
	cin>>x1>>y1>>x2>>y2;
	//计算&输出
	cout<<bfs(); 
	return 0;
}
