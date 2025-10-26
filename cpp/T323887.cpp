#include <iostream>
#include <string>
using namespace std;
//转换密码 
string quick_change(string old_pwd){
	string new_pwd=old_pwd;
	for(int i=0;i<old_pwd.size();i++){
		char c=old_pwd[i];
		if(c>='a'&&c<='z'){
			c-=32;//小写字母转大写 
		}else if(c>='A'&&c<='Z'){
			c+=32;//大写字母转小写 
		}
		new_pwd[i]=c;//替换旧字符串 
	}
	return new_pwd;
}
int main(){
	//输入
	string self_mail;
	cin>>self_mail;
	int n;
	cin>>n;
	bool flag=false;//默认没有匹配的邮箱 
	for(int i=0;i<n;i++){
		string a,b,c;
		cin>>a>>b>>c;
		if(c==self_mail){
			flag=true;//如果有匹配的邮箱就改变标签值 
			cout<<a<<" "<<quick_change(b)<<endl; 
		}
	}
	//最终判断没有匹配的邮箱，则打印empty 
	if(!flag){
		cout<<"empty";
	}
}
