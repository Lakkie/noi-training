#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//定义结构体存储比赛信息
struct Contest{
    int start,end;
};
//自定义比较函数：按结束时间升序排序
bool compare(const Contest& a,const Contest& b){
    return a.end<b.end;
}
int main(){
    //输入 
    ios::sync_with_stdio(false);//优化IO操作速度
    cin.tie(NULL);
    int n;
    if(!(cin>>n)) return 0;
    vector<Contest> cs(n);
    for(int i=0;i<n;++i){
        cin>>cs[i].start>>cs[i].end;
    }
    //计算 贪心策略：优先选择结束时间最早的比赛 
    sort(cs.begin(),cs.end(),compare);
    int count=0;
    int last_end=-1;//上一个选中比赛的结束时间，初始化为-1确保第一个比赛能被选中
    for(int i=0;i<n;++i){
        //如果当前比赛的开始时间 >= 上一个选中比赛的结束时间
        if(cs[i].start>=last_end){
            count++;
            last_end=cs[i].end;//更新结束时间
        }
    }
    //输出
    cout<<count<<endl;
    return 0;
}

