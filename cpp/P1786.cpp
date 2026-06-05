#include<iostream>
#include<algorithm>
using namespace std;
struct bz{
	string mz,zw; 
	long long gx;
	int dj,sx,zws;
};
bool cmp(bz a,bz b){
	if(a.gx!=b.gx){
		return a.gx>b.gx;
	}
	return a.sx<b.sx;
}
bool cmp2(bz a,bz b){
	if(a.zws!=b.zws){
		return a.zws<b.zws;
	}
	if(a.dj!=b.dj){
		return a.dj>b.dj;
	}
	return a.sx<b.sx;
}
int main(){
	int n;
	cin>>n;
	bz bzs[n];
	for(int i=0;i<n;i++){
		cin>>bzs[i].mz>>bzs[i].zw>>bzs[i].gx>>bzs[i].dj;
		bzs[i].sx=i;
	}
	sort(bzs+0,bzs+n,cmp);
	int k=0;
	for(int i=0;i<n;i++){
		if(bzs[i].zw=="BangZhu"){
			bzs[i].zws=1;
		}else if(bzs[i].zw=="FuBangZhu"){
			bzs[i].zws=2;
		}else{
			k++;
			if(k==1||k==2){
				bzs[i].zw="HuFa";
				bzs[i].zws=3;
			}else if(k>=3&&k<=6){
				bzs[i].zw="ZhangLao";
				bzs[i].zws=4;
			}else if(k>=7&&k<=13){
				bzs[i].zw="TangZhu";
				bzs[i].zws=5;
			}else if(k>=14&&k<=38){
				bzs[i].zw="JingYing";
				bzs[i].zws=6;
			}else if(k>=39){
				bzs[i].zw="BangZhong";
				bzs[i].zws=7;
			}
		}
	}
	sort(bzs+0,bzs+n,cmp2);
	for(int i=0;i<n;i++){
		cout<<bzs[i].mz<<" "<<bzs[i].zw<<" "<<bzs[i].dj<<" "<<endl;
	}
	return 0;
}
