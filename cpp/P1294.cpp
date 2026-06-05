#include <bits/stdc++.h>
using namespace std;
int G[100][100],bk[100],ans,fans;
int n,m;
void dfs(int cur,int dis)
{
  ans=max(ans,dis);//求最大路径
  for(int i=1;i<=n;i++)
  {
    if(G[cur][i]&&!bk[i])//保证访问次数为1
    {
      bk[i]=1;
      dfs(i,dis+G[cur][i]);
      bk[i]=0;
    }
  }
}
int main()
{
  cin>>n>>m;
  while(m--)
  {
    int t1,t2,t3;
    cin>>t1>>t2>>t3;
    G[t1][t2]=G[t2][t1]=t3;//注意双向图
  }
  for(int i=1;i<=n;i++)//枚举从每个节点开始
  {
    bk[i]=1;
    dfs(i,0);
    fans=max(fans,ans);
    memset(bk,0,sizeof(bk));
  }
  cout<<fans;
}

