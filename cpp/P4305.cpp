#include<iostream>
#include<set>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,x;
        cin>>n;
        set<int> seen;
        for(int j=0;j<n;j++) {
            cin>>x;
            if(seen.count(x)==0){
                seen.insert(x);
                cout<<x<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

