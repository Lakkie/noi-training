#include<iostream>
#include<vector>
using namespace std;
int dp(int n){
	vector<int> dp(n+7,0);
	dp[0]=1,dp[1]=1,dp[2]=1,dp[3]=1,dp[4]=2,dp[5]=3,dp[6]=4;
	if(n>=7){
		//从7级阶梯到n级阶梯 
		for(int i=7;i<=n;i++){
			dp[i]=(dp[i-1]+dp[i-3])%100003;
		}
	}
	return dp[n];
}
int main(){
	int n;
	cin>>n;
	cout<<dp(n)<<endl;
	return 0;
} 
