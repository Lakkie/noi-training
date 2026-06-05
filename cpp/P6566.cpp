#include<iostream>
using namespace std;
//cnt星系的数量，sum星系的大小，max最大星系的大小 
int n,m,cnt=0,sum=0,maxsum=0;
// 0代表可以访问（有星星），1代表不可以访问（没有星星，不算在一个星系）。 
int vis[1505][1505]={0};
// 星座 
int xz[100005]={0}; 
//方向数组：分别代表八个方向的坐标偏移量。
int dx[8]={ 1,1,1,-1,-1,-1,0, 0};
int dy[8]={-1,0,1,-1, 0, 1,1,-1};
//深度优先搜索，从一个星座的起始星星(x,y)开始搜索，直到搜索找到它周围的全部星星。 
void dfs(int x,int y){
	//本星座星星+1 
	sum++;
	//标记当前星星已经被统计了，下次不能访问了。
	vis[x][y]=1;
	//朝八个方向找星星。 
	for(int i=0;i<8;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		//如果找到周围有星星了。（坐标在地图范围内，且坐标标记此处有星星vis==0。） 
		if(nx>0&&nx<=n&&ny>0&&ny<=m&&vis[nx][ny]==0){
			//继续搜索周围的其他星星。 
			dfs(nx,ny); 
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
				vis[i][j]=1;//代表此处没有星星，不需要访问该坐标。 
			}
		}
	}
	//遍历全部地图。 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			//找到没有被标记的星星，代表发现一个星座的起始星星。 
			if(vis[i][j]==0){
				//初始化这个星座的星星数量。 
				sum=0;
				//从起始星星开始搜索，统计这个星座有多少颗星星。 
				dfs(i,j);
				//如果有相同大小的星座，就累计到一起，用于后续的星系计算。 
				if(xz[sum]>0){
					xz[sum]+=1; 
				}else{
					xz[sum]=1;
					//星系+1 
					cnt++;					
				}
				//搜索完成后，当前星系的星星数量为sum*xz[sum]，如果比maxsum大，就替换上去。 
				if(sum*xz[sum]>maxsum){
					maxsum=sum*xz[sum];
				}	
			}
		}
	}
	cout<<cnt<<' '<<maxsum;
	return 0;
}
