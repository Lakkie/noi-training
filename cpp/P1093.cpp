#include<iostream>
#include<algorithm>
using namespace std;
//定义结构体代表学生信息。
struct stu{
	int a,b,c,s,m;
};
//定义排序规则函数。
bool r(stu pre,stu nxt){ 
	if(pre.s!=nxt.s){//首先按总分排序 
		return pre.s>nxt.s;
	}else if(pre.s==nxt.s){
		if(pre.a!=nxt.a){//其次按语文分排序 
			return pre.a>nxt.a;
		}else if(pre.a==nxt.a){
			return pre.m<nxt.m;//最后按学号排序 
		}else{
			//do nothing
		}
	}else{
		//do nothing
	}
	return true;//如果都没匹配上，默认不改变顺序。 
}
int main(){
	//输入 
	int n;
	cin>>n;
	struct stu t[301];
	for(int i=0;i<n;i++){
		int a,b,c;
		cin>>a>>b>>c;
		t[i+1]={a,b,c,a+b+c,i+1}; 
	}
	//排序
	sort(t,t+n+1,r);
	//输出
	for(int i=0;i<5;i++){
		cout<<t[i].m<<" "<<t[i].s<<endl;
	} 
	return 0;
} 
