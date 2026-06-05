#include <iostream>
#include <vector>
using namespace std;
int dp(int n){
    vector<int> dp(n+1,0);
    dp[0]=1,dp[1]=1;
    for (int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main() {
	int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>a>>b;
    	cout<<dp(b-a)<<endl;
	}
    return 0;
}

