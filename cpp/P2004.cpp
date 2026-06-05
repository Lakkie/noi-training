#include<iostream>
using namespace std;
const int maxn=1005;
int n,m,c;
long long a[maxn][maxn],sum[maxn][maxn];
long long s,maxs=0,x=0,y=0;
int main(){
	//输入 
    cin>>n>>m>>c;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		cin>>a[i][j];
    		//计算二维前缀和。 
    		sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a[i][j];
		}
	}
	//计算最大占地面积。 
    for(int i=1;i<=n-c+1;i++){
    	for(int j=1;j<=m-c+1;j++){
    		s=sum[i+c-1][j+c-1]-sum[i-1][j+c-1]-sum[i+c-1][j-1]+sum[i-1][j-1];
    		if(maxs<s){
    			maxs=s;
    			x=i;
    			y=j;
			}
		}
	}
	//输出
	cout<<x<<" "<<y<<endl;
	return 0;
}
