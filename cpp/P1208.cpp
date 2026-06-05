#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//定义结构体存储奶农信息
struct Milk{
    int p,a;
};
//自定义比较函数：按结束时间升序排序
bool compare(const Milk& a,const Milk& b){
    return a.p<b.p;
}
int main(){
    //输入 
    ios::sync_with_stdio(false);//优化IO操作速度
    cin.tie(NULL);
    int n,m;
    if(!(cin>>n>>m)) return 0;
    vector<Milk> ms(m);
    for(int i=0;i<m;++i){
        cin>>ms[i].p>>ms[i].a;
    }
    //计算 贪心策略：优先选择价格低的 
    sort(ms.begin(),ms.end(),compare);
    int total_price=0;
    int current_a=0;
    for(int i=0;i<m;++i){
		current_a+=ms[i].a;
		if(current_a<=n){
			total_price+=ms[i].a*ms[i].p; 
		}else{
			total_price+=(n-current_a+ms[i].a)*ms[i].p;
			break;
		}
    }
    //输出
    cout<<total_price<<endl;
    return 0;
}

