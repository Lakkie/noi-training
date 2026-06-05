#include<iostream>
using namespace std;
//定义排序规则函数。
bool r(string pre,string nxt){ 
	if(pre.size()!=nxt.size()){//首先按长度排序。 
		return pre.size()>nxt.size();
	}else if(pre.size()==nxt.size()){
		return pre>nxt;//其次按字符串大小排序。
	}else{
		//do nothing
	}
	return true;//如果都没匹配上，默认不改变顺序。
}
int main(){
	int n,idx=0;
	cin>>n;
	string m[n+1],max;
	for(int i=0;i<n;i++){
		cin>>m[i];
		if(r(m[i],max)){
			max=m[i];
			idx=i+1;
		}
	}
	cout<<idx<<endl;
	cout<<max<<endl;
	return 0;
}
