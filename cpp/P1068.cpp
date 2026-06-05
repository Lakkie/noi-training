#include<iostream>
#include<algorithm>
using namespace std;
struct zyz{
	int bmh, bscj;
};
bool r(zyz a,zyz b){
	if(a.bscj>b.bscj){//1笔试成绩高的排前面 
		return true;
	}else if(a.bscj==b.bscj){//2笔试成绩相同的 
		return a.bmh<b.bmh;//报名号小的排前面。 
	}else if(a.bscj<b.bscj){//3笔试成绩低的排后面。 
		return false;
	}else{//4异常情况。 
		return true;//顺序保持不变。 
	} 
}
int main(){
	int n,m,k; 
    cin>>n>>m;
    zyz a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i].bmh>>a[i].bscj;
	}
	sort(a,a+n,r);//按自定义规则排序。
	k=int(m*1.5);//计算入选人数，取整。 
	for(int i=k;i<n;i++){//判断后续是否有重分。 
		if(a[i-1].bscj==a[i].bscj){
			k++;
		}else{
			break;
		} 
	}
	cout<<a[k-1].bscj<<" "<<k<<endl;
	for(int i=0;i<k;i++){
		cout<<a[i].bmh<<" "<<a[i].bscj<<endl;
	}
	return 0;
}
