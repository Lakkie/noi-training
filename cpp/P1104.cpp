#include<iostream>
#include<algorithm>
using namespace std;
struct stu{
	string s;
	int y,m,d,idx;
};
bool px(stu a, stu b){
	if(a.y!=b.y){
		return a.y<b.y;
	}
	if(a.m!=b.m){
		return a.m<b.m;
	}
	if(a.d!=b.d){
		return a.d<b.d;
	}
	return a.idx>b.idx;		
}
int main(){
	int n;
	cin>>n;
	stu a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].s>>a[i].y>>a[i].m>>a[i].d;
		a[i].idx=i;
	}
	sort(a+0,a+n,px);
	for(int i=0;i<n;i++){
		cout<<a[i].s<<endl;
	}
	return 0;
}
