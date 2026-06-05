#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    //输入 
    ios::sync_with_stdio(false);//优化IO操作速度
    cin.tie(NULL);
    int n,m;
    if(!(cin>>n>>m)) return 0;
    vector<int> a(n),z(m);
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    for(int i=0;i<m;++i){
        cin>>z[i];
    } 
    //剪枝，如果骑士数量不足，直接失败。 
    if(n>m){
		//输出
	    cout<<"you died!"<<endl;
	}else{
	    //计算 贪心策略：小头配小骑士，大头配大骑士，优先选择一刀搞定且花费最小的 
		sort(a.begin(),a.end()); 
		sort(z.begin(),z.end()); 
		int zi=0;
		long long sum=0;
		for(int i=0;i<n;++i){
			for(int j=zi;j<m;++j){
				if(z[j]>=a[i]){
					sum+=z[j];
					zi++;
					break; 
				}
			}
		} 
		//n个头全部搞定 
		if(zi==n){
			cout<<sum<<endl;
		}else{
	    	cout<<"you died!"<<endl;
		}
	}
    return 0;
}

