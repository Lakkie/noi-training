#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
	//输入
	int n;
	cin>>n;
	unsigned int a[n];
	//（顶部数字）最大的堆，用于存放较小的一半数字，每次push后按从小到大排序。 
	priority_queue<unsigned int,vector<unsigned int>,less<unsigned int> > maxHeap;
	//（顶部数字）最小的堆，用于存放较大的一半数字，每次push后按从大到小排序。 
	priority_queue<unsigned int,vector<unsigned int>,greater<unsigned int> > minHeap;
	for(int i=0;i<n;i++){
		cin>>a[i];
		//判断当前数字大小，分别存入不同的堆。优先存入maxHeap。 
		if(maxHeap.empty()||a[i]<=maxHeap.top()){
			maxHeap.push(a[i]);
		}else{
			minHeap.push(a[i]);
		}
		//平衡两个堆的大小差不超过1。
		if(maxHeap.size()>minHeap.size()+1){
			minHeap.push(maxHeap.top());
			maxHeap.pop();
		}else if(maxHeap.size()<minHeap.size()){
			maxHeap.push(minHeap.top());
			minHeap.pop();
		}
	}
	if(maxHeap.size()==minHeap.size()){
		cout<<(maxHeap.top()+minHeap.top())/2.0;
	}else{
		cout<<maxHeap.top();
	}
	return 0;
}
