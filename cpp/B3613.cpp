#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
const int MAXN=500005;
vector<int> a[MAXN];//邻接表 Adjacency List 
int T,n,m,u,v;
int main(){
	//输入数据的组数。
	cin>>T;
	while(T--){
		//输入图的顶点数和边数。 
    	cin>>n>>m;
    	//清空上一组数据。 
        for(int i=1;i<=n;i++){
            a[i].clear();
        }
    	//添加有向图的边。 
	    for(int i=1;i<=m;i++){
			cin>>u>>v;
			a[u].push_back(v);
		}
		//处理每个节点。 
	    for(int i=1;i<=n;i++){
	    	//对该节点的出边进行排序。 
	    	sort(a[i].begin(),a[i].end());
	        for(int j=0;j<a[i].size();j++){
	        	cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
    return 0;
}

