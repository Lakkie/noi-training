#include<iostream>
#include<vector>
using namespace std;
const int MAXN=100005;
vector<int> a[MAXN];//邻接表 Adjacency List 
int n,d,u,v,ans=0;//ans记录符合条件的企鹅数量。
//u: 当前所在的房间
//parent: 上一个来的房间（防止走回头路）
//depth: 当前走了多少步
void dfs(int u,int parent,int depth){
	//剪枝：如果深度超过 d，不再继续搜索。
    if(depth>d){
		return;
	}
    //如果当前房间不是起点1号，且步数在限制内，则发现一只企鹅。 
    if(u!=1){
        ans++;
    }
    //遍历当前房间的所有邻居。 
    for(int i=0;i<a[u].size();++i){
    	int vv=a[u][i];
        //避免走回头路（即不要回到父节点）。 
        if (vv==parent){
        	continue;
		}
        //递归访问下一个房间，步数+1。 
        dfs(vv,u,depth+1);
    }
}
int main(){
    //优化IO
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>d;
    //读取边，建立无向图。 
    for (int i=0;i<n-1;++i){
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    //从1号房间开始搜索，父节点设为0（不存在），初始深度为0。 
    dfs(1,0,0);
    cout<<ans<<endl;
    return 0;
}

