#include <iostream>
using namespace std;
int main(){
	int x,y,z,n,m,ct=0;
	cin>>x>>y>>z>>n>>m;
	//设公鸡，母鸡和小鸡的数量分别为a,b,c只,则： 
	//购买总数为：  a+b+c=m
	//购买总金额为：ax+by+c/z=n 
	
	//第一个循环代表购买的公鸡数量，公鸡最多可以买n/x只。注意a从0开始，0代表不买公鸡。 
	for(int a=0;a<=n/x;a++){
		//第二个循环代表购买的母鸡数量，母鸡最多可以买n/y只。注意b从0开始，0代表不买母鸡。
		for(int b=0;b<=n/y;b++){
			//判断是否符合购买的限制要求： 
			if((m-a-b)>=0&&(m-a-b)%z==0&&a*x+b*y+(m-a-b)/z==n){
				ct++; 
			} 
		} 
	}
	cout<<ct;
    return 0;
}
