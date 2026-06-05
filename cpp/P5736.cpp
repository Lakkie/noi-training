#include<iostream>
#include<vector>
using namespace std;
bool is_prime[100005];
//埃拉托斯特尼筛法 
void Eratosthenes(int n) {
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i <= n; ++i) is_prime[i] = true;
	// i * i <= n 说明 i <= sqrt(n)
	for (int i = 2; i * i <= n; ++i) {
 		if (is_prime[i])
          	for (int j = i * i; j <= n; j += i) is_prime[j] = false;
    }
}
int main(){
	//输入 
    int n,max=0;
    cin>>n;
    int a[105];
    for(int i=1;i<=n;i++){
		cin>>a[i];
		Eratosthenes(a[i]);//计算：标记质数。 
	}
	//输出 
	for(int i=1;i<=n;i++){
		if(is_prime[a[i]]==1){
			cout<<a[i]<<" "; 
		} 
	}
    return 0;
}
