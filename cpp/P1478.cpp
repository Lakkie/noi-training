#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//定义结构体存储苹果信息
struct Apple{
    int x,y;
};
//自定义比较函数：按花费力气时间升序排序
bool compare(const Apple& a,const Apple& b){
    return a.y<b.y;
}
int main(){
    //输入 
    ios::sync_with_stdio(false);//优化IO操作速度
    cin.tie(NULL);
    int n,s,a,b;
    if(!(cin>>n>>s>>a>>b)) return 0;
    vector<Apple> as(n);
    for(int i=0;i<n;++i){
        cin>>as[i].x>>as[i].y;
    }
    //计算 贪心策略：优先选择花费力气小的苹果 
    sort(as.begin(),as.end(),compare);
    int count=0;
    int current_s=s;
    for(int i=0;i<n;++i){
		if(as[i].x<=a+b){//可以摘到
			current_s-=as[i].y;
			if(current_s<0){
				break;
			}else{
				count++;
			}
		}
    }
    //输出
    cout<<count<<endl;
    return 0;
}f,

