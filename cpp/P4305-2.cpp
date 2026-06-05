#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=5e4+5;
pair<int,int> a[maxn],b[maxn];
int main(){
    int T,n,c;
    cin>>T;
    while(T--){
    	c=0;
        cin>>n;
        for(int i=1;i<=n;i++) {
            cin>>a[i].first;
            a[i].second=i;
        }
        sort(a+1,a+1+n);
        for(int i=1;i<=n;i++) {
            if(a[i].first!=a[i-1].first||i==1){
            	b[++c].second=a[i].first;
            	b[c].first=a[i].second;
			}
        }
        sort(b+1,b+1+c);
        for(int i=1;i<=c;i++){
        	cout<<b[i].second<<" "; 
		}
        cout<<endl;
    }
    return 0;
}

