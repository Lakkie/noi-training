#include <iostream>
using namespace std;
int main(){
    // 输入
	int n,s=0;
	cin>>n;

    // 计算
    for(int i=0;i<n;i++){
        s+=i;
    }

    // 输出
	cout<<s<<endl;

    return 0;
}
