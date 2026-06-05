#include<iostream>
using namespace std;
const int MOD=100003;  // 定义模数，用于防止整数溢出
// 快速幂函数：计算 a^b % MOD
// 参数：a-底数，b-指数
// 返回值：a^b 对 MOD 取模的结果
long long ksm(long long a,long long b){
    long long res=1;  // 初始化结果为1
    while(b){         // 当指数不为0时循环
        if(b&1){      // 如果指数是奇数
            res=res*a%MOD;  // 将当前底数乘入结果
        }
        a=a*a%MOD;    // 底数自乘，相当于指数减半
        b>>=1;        // 指数右移一位（相当于除以2）
    }
    return res;       // 返回最终结果
}

int main(){
    long long m,n,ans;  // 声明变量m,n用于输入，ans用于存储结果
    cin>>m>>n;          // 读入m和n
    ans=ksm(m,n)-m*ksm(m-1,n-1)%MOD;  // 计算表达式：m^n - m*(m-1)^(n-1)
    ans=(ans+MOD)%MOD;  // 处理负数情况，确保结果为正数
    cout<<ans<<endl;    // 输出结果
    return 0;           // 程序正常结束
}

