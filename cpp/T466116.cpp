#include<iostream>
using namespace std;
const int maxn=1005;
int n,m,q,a[maxn][maxn],sum[maxn][maxn];
int main(){
    cin>>n>>m>>q;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		cin>>a[i][j];
    		sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a[i][j];
		}
	}
    while(q--){
    	int x1,y1,x2,y2,s;
    	cin>>x1>>y1>>x2>>y2;
    	s=sum[x2][y2]-sum[x1-1][y2]-sum[x2][y1-1]+sum[x1-1][y1-1];
		cout<<s<<endl;
	}	
	return 0;
}
