#include<iostream>
using namespace std;
const int MAXN=1005; 
int n,m,u,v;
int a[MAXN][MAXN];//邻接矩阵 Adjacency Matrix
int main(){
	//输入图的顶点数和边数。 
    cin>>n>>m;
    //添加无向图的边。 
    for(int i=0;i<m;i++){
		cin>>u>>v;
		a[u-1][v-1]=1;
    	a[v-1][u-1]=1;
	}
    //打印邻接矩阵效果。
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    //打印邻接表效果。 
    for(int i=0;i<n;i++){
        int d=0;
        for(int j=0;j<n;j++){
        	if(a[i][j]>0){
        		d++;
			}
		}
		cout<<d<<" ";
        for(int j=0;j<n;j++){
        	if(a[i][j]>0){
        		cout<<j+1<<" ";
			}
		}
		cout<<endl;
    }
    return 0;
}

