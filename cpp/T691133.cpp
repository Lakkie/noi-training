#include<iostream>
#include<queue>
using namespace std;
int main(){
	int m,n,k;
	cin>>m>>n>>k;
	queue<int> man;
	queue<int> woman;
	for(int i=1;i<=m;i++){//男队编号队列 
		man.push(i);
	}
	for(int i=1;i<=n;i++){//女队编号队列 
		woman.push(i);
	}
	for(int i=0;i<k;i++){//每支舞曲配对 
		cout<<man.front()<<' '<<woman.front()<<endl;
		man.push(man.front());
		man.pop();
		woman.push(woman.front());
		woman.pop();
	} 
	return 0;
}
