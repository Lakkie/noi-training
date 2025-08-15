#include <iostream>
#include <cmath> 
using namespace std;
int main(){
	int a,b,ct=0;
	cin>>a>>b;
	//第一层循环代表从a数到b。 
	for(int i=a;i<=b;i++){
		//默认当前数字i是素数。 
		bool f=true;
		//第二层循环用于判断当前的数i是不是素数。(小技巧：用开平方函数缩减循环的次数) 
		for(int j=2;j<=sqrt(i);j++){
			//如果发现当前数字i可以被其他正整数整除，则代表判断出这个数不是素数 
			if(i%j==0){
				f=false;
				//有判断结果了之后，后续的循环就要忽略掉。用break结束当前的第二层循环。 
				break;
			}
		}
		//当前数字i是不是素数，是就统计数ct加1。 
		if(f){
			ct++;
		}
	} 
	cout<<ct;
    return 0;
}
