#include<iostream>
#include<stack>
using namespace std;
struct hntMove{
	int d;
	char g1,g2,g3;
};
void hnt(int d,char g1,char g2,char g3){
    stack<hntMove> ms;
    ms.push({d,g1,g2,g3});
	while(!ms.empty()){
		hntMove m=ms.top();
		ms.pop();
		if(m.d==1){
			cout<<m.g1<<"->"<<m.d<<"->"<<m.g3<<endl;
		}else{
			ms.push({m.d-1,m.g2,m.g1,m.g3});
			ms.push({1,m.g1,m.g2,m.g3});
			ms.push({m.d-1,m.g1,m.g3,m.g2});
		}
	}
}
int main(){
    int n;
    char g1,g2,g3;
    cin>>n>>g1>>g2>>g3;
    hnt(n,g1,g2,g3);
    return 0;
}
