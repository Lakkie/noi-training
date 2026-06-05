#include <iostream>
#include <vector>
using namespace std;
long long dp(int n){
    vector<long long> dp(n+1,0);
    dp[0]=1,dp[1]=1;
    for (int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main() {
    int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int n;
		cin>>n;
		if(n>0&&n<=50){
			cout<<dp(n)<<endl;
		}
	}
    return 0;
}

