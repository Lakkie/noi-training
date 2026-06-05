#include<vector>
#include<iostream>
#include<cstring>
using namespace std;
const int MAXN=1005;
vector<int> a[MAXN];//邻接表 Adjacency List 
int n,m,u,v,max_node;
bool vis[MAXN];//访问标记数组, 1表示不可访问，0表示可以访问。
void dfs(int u){
	vis[u]=1;
	if(u>max_node){
		max_node=u;
	}
    for(int i=0;i<a[u].size();i++){
    	if(vis[a[u][i]]==0){
            dfs(a[u][i]);
        }
	}
}
int main(){
	//输入图的顶点数和边数。 
	cin>>n>>m;
	//添加有向图的边。
    for(int i=1;i<=m;i++){
		cin>>u>>v;
		a[u].push_back(v);
	}
	//处理每个节点。 
    for(int i=1;i<=n;i++){
    	//初始化。 
    	max_node=0;
    	memset(vis, 0, sizeof(vis));//把整个访问标记数组的值全部设置为0。 
    	dfs(i);//深度优先搜索。 
    	cout<<max_node;
    	if(i<n){
    		cout<<" ";	
		}
	}
    return 0;
}

