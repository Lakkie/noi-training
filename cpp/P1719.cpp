#include<iostream>
using namespace std;
const int maxn=125;
int n,m,c;
long long a[maxn][maxn],sum[maxn][maxn];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		cin>>a[i][j];
    		sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a[i][j];
		}
	}
	long long s,maxs=0;
    for(int x1=1;x1<=n;x1++){
    	for(int y1=1;y1<=n;y1++){
		    for(int x2=1;x2<=n;x2++){
				for(int y2=1;y2<=n;y2++){
					if(x1>x2||y1>y2){
						continue;
					}
					s=sum[x2][y2]-sum[x1-1][y2]-sum[x2][y1-1]+sum[x1-1][y1-1];
		    		if(maxs<s){
		    			maxs=s;
					}
				}
			}	
		}
	}
	cout<<maxs<<endl;
	return 0;
}
