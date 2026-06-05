#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	//定义结构体 
	struct stu{
		string name;
		float Chinese, Math, English, aver;
	}; 
	//创建结构体数组 
	struct stu s[4];
	//输入 
	for(int i=0;i<4;i++){
		cin>>s[i].name>>s[i].Chinese>>s[i].Math>>s[i].English;
		//计算 
		s[i].aver=(s[i].Chinese+s[i].Math+s[i].English)/3;
	}
	//输出 
	for(int i=0;i<4;i++){
		cout<<s[i].name<<":"<<fixed<<setprecision(4)<<s[i].aver<<endl;
	}
	return 0;
}
