#include<iostream>
#include<queue>
using namespace std;
int main(){
	int m,n,k,c=0;
	cin>>m>>n;
	int f[1001]={0};//辅助标记 
	queue<int> a;
	for(int i=0;i<n;i++){
		cin>>k;
		if(f[k]==1){//存在内存中。 
			//忽略。 
		}else{//不存在内存中。 
			c++;
			if(a.size()==m){//超过内存限制。
				f[a.front()]=0;
				a.pop();//首元素出队。
				a.push(k);//当前字母入队到队尾。
				f[k]=1;
			}else{//没有超过内存限制。
				a.push(k);//当前字母直接入队到队尾。
				f[k]=1; 
			} 
		} 
	}
	cout<<c;
	return 0;
}
