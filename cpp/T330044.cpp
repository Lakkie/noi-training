#include <iostream>
using namespace std;
struct s{
    int d;
    double sc;
};
int main(){
    int n,k;
    cin>>n>>k;
    s st[105];
    for(int i=0;i<n;i++){
        cin>>st[i].d>>st[i].sc;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(st[j].sc<st[j+1].sc) {
                s t=st[j];
                st[j]=st[j+1];
                st[j+1]=t;
            }
        }
    }
    cout<<st[k-1].d<<" "<<st[k-1].sc<<endl;
    return 0;
}
