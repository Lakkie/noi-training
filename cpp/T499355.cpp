#include<iostream>
#include<algorithm>
using namespace std;
struct zl{
	string s;
	int y,m,d,idx;
}; 
bool cmp(zl a,zl b){
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
	zl zls[n];
	for(int i=0;i<n;i++){
		cin>>zls[i].s>>zls[i].y>>zls[i].m>>zls[i].d;
		zls[i].idx=i;
	}
	sort(zls+0,zls+n,cmp);
	for(int i=0;i<n;i++){
		cout<<zls[i].s<<endl;
	}
} 
