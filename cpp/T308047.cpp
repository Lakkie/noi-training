#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    //输入 
    ios::sync_with_stdio(false);//优化IO操作速度
    cin.tie(NULL);
    int N;
    long long B;//书架高度B可能较大，虽然Hi较小，但累加和或比较时用long long更安全，尽管题目中B<2*10^9，int通常够用，但习惯上用long long防溢出
    if(!(cin>>N>>B)) return 0;
    vector<int> heights(N);
    for(int i=0;i<N;++i){
        cin>>heights[i];
    }
    //计算 贪心策略：为了使用最少的奶牛，优先选择最高的奶牛
    sort(heights.begin(),heights.end(),greater<int>());//将高度数组按降序排序
    long long current_height=0;
    int count=0;
    for(int i=0;i<N;++i){
        current_height+=heights[i];
        count++;
        if(current_height>=B){//一旦总高度达到或超过书架高度，即可停止
            break;
        }
    }
 	//输出 
    cout<<count<<endl;
    return 0;
}

