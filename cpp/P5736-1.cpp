#include<iostream>
using namespace std;
int main(){
	// 输入 
	int n,max=0;
	cin>>n;
	int a[105]={0};
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>max){
			max=a[i];
		}
	}
	// 计算 
	int x=max;
	bool boo[100005]={0};
	// 特例处理，0和1不是质数。 
	boo[0]=1;
	boo[1]=1;
	// 从2开始，筛质数用的数字只需要到根号n。 
	for(int i=2;i*i<=n;i++){
		// 若数字没有被标记，说明它是质数。 
		if(boo[i]==0){
			// 从i*i开始，将所有j的倍数标记为非质数。 
			for(int j=i*i;j<=x;j+=i){
				boo[j]=true;//非质数标记为1。 
			}
		}
	}
	// 输出 
	for(int i=1;i<=n;i++){
		if(boo[a[i]]==0){
			cout<<a[i]<<" "; 
		} 
	}
	return 0;
}
