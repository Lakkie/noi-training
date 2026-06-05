#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
struct person{
 int id, time;
};
//自定义比较函数
bool compare(const person& a,const person& b){
    if(a.time!=b.time){
        return a.time<b.time;//接水时间短的排前面
    }
    return a.id<b.id;//时间相同，编号小的排前面
}
int main(){
    //输入 
    ios::sync_with_stdio(false);//优化IO操作速度
    cin.tie(NULL);
    int n;
	if(!(cin>>n)) return 0;
    vector<person> ps(n);
    for(int i=0;i<n;++i){
        cin>>ps[i].time;
        ps[i].id=i+1;
    }
    //计算 贪心策略：为了使所有人平均排队时间最短，选择排队花时间最少的人先接水 
    sort(ps.begin(),ps.end(),compare);
    //输出 排队顺序
    for(int i=0;i<n;++i){
        cout<<ps[i].id;
        if(i<n-1){
            cout<<" ";
        }
    }
    cout<<endl;
    //总等待时间 = 第1个人的等待(0) + 第2个人的等待(T1) + 第3个人的等待(T1+T2) + ...
    //注意：最后一个人不需要被计入“被等待”的贡献中用于计算别人的等待，但我们需要计算的是“每个人的等待时间之和”。
    long long total_wait_time=0;
    long long current_accumulated_time=0;
    for(int i=0;i<n;++i){
        //当前这个人 i 的等待时间，等于前面所有人接水时间的总和
        total_wait_time+=current_accumulated_time;
        // 累加当前这个人的接水时间，供下一个人使用
        current_accumulated_time+=ps[i].time;
    }
    //计算并输出平均等待时间
    double average_wait_time=static_cast<double>(total_wait_time)/n;
    cout<<fixed<<setprecision(2)<<average_wait_time<<endl;
    return 0;
}

