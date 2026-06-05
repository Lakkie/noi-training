#include<iostream>
#include<cmath>
using namespace std;
int map[1025][1025];
void fx(int n,int x,int y){
    if(n==1){
        map[x][y]=0;
        return;
    }
    int s=pow(2,n-1);
    //左上角 
    for(int i=x;i<x+s;i++){
        for(int j=y;j<y+s;j++){
            map[i][j]=0;
        }
    }
    fx(n-1,x+s,y);//右上角 
    fx(n-1,x,y+s);//左下角 
    fx(n-1,x+s,y+s);//右下角 
}
int main(){
	int n,x=0,y=0;
	cin>>n;
	int size=pow(2,n);
	//初始化全部元素为1 
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            map[i][j]=1;
        }
    }
	fx(n,0,0);
    //输出全部元素
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<map[i][j]<<' ';
        } 
        cout<<endl;
    }
	return 0;
}

