#include <iostream>
using namespace std;
const int maxn=1005;
const int mod=100003;
int main(){
	int n,m,x,y;
    int dp[maxn][maxn];
	cin>>n>>m;
    //标记障碍物
    for(int i=0;i<m;i++){
        cin>>x>>y;
        dp[x][y]=-1;//用-1表示障碍物
    }
    //初始化起点
    dp[1][1]=1;
    //动态规划填表
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(dp[i][j]!=-1){
                //从上方转移
                if (i>1&&dp[i-1][j]!=-1){
                	dp[i][j]=(dp[i][j]+dp[i-1][j])%mod;
                }
                //从左方转移
                if (j>1&&dp[i][j-1]!=-1){
                    dp[i][j]=(dp[i][j]+dp[i][j-1])%mod;
                }
            }
        }
    }
    cout<<dp[n][n]<<endl;
    return 0;
}

