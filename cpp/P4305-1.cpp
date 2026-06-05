#include<iostream>
#include<unordered_set>
using namespace std;
const int maxn=5e4+5;
int a[maxn];
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        unordered_set<int> seen;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            seen.insert(a[i]);
        }
        for(int i=0;i<n;i++) {
            if(seen.count(a[i])){
            	cout<<a[i]<<" ";
            	seen.erase(a[i]);
			}
        }
        cout<<endl;
    }
    return 0;
}

