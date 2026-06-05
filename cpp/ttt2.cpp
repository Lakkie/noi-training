#include <bits/stdc++.h>
using namespace std;
const int maxn = 1005;
const int mod = 100003;
int dp[maxn][maxn];
int n, m;
int a, b;

int main() {
    cin >> n >> m;
    // 标记障碍物
    while (m--) {
        cin >> a >> b;
        dp[a][b] = -1; // 用-1表示障碍物
    }
    // 初始化起点
    dp?:ml-citation{ref="1" data="citationList"} = 1;
    // 动态规划填表
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (dp[i][j] != -1) {
                // 从上方转移
                if (i > 1 && dp[i-1][j] != -1) {
                    dp[i][j] = (dp[i][j] + dp[i-1][j]) % mod;
                }
                // 从左方转移
                if (j > 1 && dp[i][j-1] != -1) {
                    dp[i][j] = (dp[i][j] + dp[i][j-1]) % mod;
                }
            }
        }
    }
    cout << dp[n][n] << endl;
    return 0;
}

