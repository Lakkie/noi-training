#include<iostream>
using namespace std;
int main(){
	//输入 
	int n,na,nb;
	cin>>n>>na>>nb;
	int a[na],b[nb];
	for(int i=0;i<na;i++){
		cin>>a[i];
	} 
	for(int i=0;i<nb;i++){
		cin>>b[i];
	} 
	//游戏规则：赢记为1，平输都记为0. 
	const int win[10][10]={{0,0,1,1,0},{1,0,0,1,0},{0,1,0,0,1},{0,0,1,0,1},{1,1,0,0,0}};	
	int res1=0,res2=0;
	for(int i=0;i<n;i++){
		res1+=win[a[i%na]][b[i%nb]];
		res2+=win[b[i%nb]][a[i%na]];
	}
	cout<<res1<<" "<<res2<<endl;
	return 0;
}
