#include<iostream>
using namespace std;
const int MOD=100003;  // 定义模数，用于防止整数溢出
// 快速幂函数：计算 a^b % MOD
// 参数：a-底数，b-指数
// 返回值：a^b 对 MOD 取模的结果
long long quick_pow(long long a,long long b){
	// 递归边界：任何数的0次方为1。 
    if(b==0){
    	return 1ll;
	}
	// 递归转移规则 
	if(b%2==1){ //遇到基数个，拆一个a出来 
		return quick_pow(a,b-1)*a%MOD; 
	}else{ //遇到偶数个，先求一半
		long long tmp=quick_pow(a,b/2)%MOD;
		return tmp*tmp%MOD; 
	}
}

int main(){
	//输入 
    long long m,n;
    cin>>m>>n;
    //计算
    int ans; 
	ans=quick_pow(m,n)-m*quick_pow(m-1,n-1)%MOD;  // 计算表达式：m^n - m*(m-1)^(n-1)
    ans=(ans+MOD)%MOD;  // 处理负数情况，确保结果为正数 
	//输出 
    cout<<ans<<endl;
    return 0;
}

