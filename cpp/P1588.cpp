#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
const int MAXN=100000;
int step[MAXN*2+10];
int t,x,y;
void bfs(){
	memset(step,-1,sizeof step);
	queue<int> q;
	q.push(x);
	step[x]=0;
	while(q.size()){
		int p=q.front();
		q.pop();
		if(p==y){//找到目标。
			return;
		}else{
			//移动到 p+1
			if(p+1<=MAXN&&step[p+1]==-1){
				step[p+1]=step[p]+1;
				q.push(p+1);
			}
			//移动到 p-1 
			if(p-1>=0&&step[p-1]==-1){
				step[p-1]=step[p]+1;
				q.push(p-1);
			} 
			//移动到 2×p 
			if(p*2<=MAXN&&p*2<=y*2&&step[p*2]==-1){
				step[p*2]=step[p]+1;
				q.push(p*2);
			} 
		} 
	}
}
int main(){
	//输入
	cin>>t;
	while(t--){
		cin>>x>>y;
		//计算 
		bfs();
		//输出 
		cout<<step[y]<<endl;
	}
	return 0;
}
