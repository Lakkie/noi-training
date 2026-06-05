#include<iostream>
#include<queue>
using namespace std;
int main(){
	int m,n;
	cin>>n>>m;
	queue<int> a;//n个人按顺序编号。 
	queue<int> b;//出圈人的编号。
	for(int i=1;i<=n;i++){
		a.push(i);
	}
	while(a.size()>0){
		for(int i=1;i<m;i++){
			a.push(a.front());//把a队列第一个元素入队到队尾。 
			a.pop();//把a队列第一个元素删掉。 
		}
		b.push(a.front());//把满足出圈要求的编号放到b队列。 
		a.pop();//去掉a队列中已经出圈的编号。 
	}
	for(int i=1;i<=n;i++){
		cout<<b.front()<<' ';
		b.pop();
	}
	return 0;
}
