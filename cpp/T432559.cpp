#include <iostream>
#include <cstring>
using namespace std;
//判断是否为小写字母。 
bool isLower(char ch){
	return ch>='a'&&ch<='z';
}
//判断是否为大写字母。 
bool isUpper(char ch){
	return ch>='A'&&ch<='Z';
}
//字母循环右移三个位置 
char cycleMove(char ch){
	if(isLower(ch)){
		if((ch+3)>'z'){
			ch=ch+3-26;
		}else{	
			ch=ch+3;
		}
	}else if(isUpper(ch)){
		if((ch+3)>'Z'){
			ch=ch+3-26;
		}else{
			ch=ch+3;
		}
	}else{
		//特殊情况，不需要处理。 
	}
	return ch;
} 
//转换大写字母为小写。 
char toLowerOrUpper(char ch){
	if(isUpper(ch)){
		return ch-'A'+'a';//+32
	}else if(isLower(ch)){
		return ch-'a'+'A';//-32 
	}else{
		//特殊情况，不需要处理。
		return ch;
	} 
}
int main(){
	char a[100];
	cin>>a;
	//逐个字符处理 
	for(int i=0;i<strlen(a);i++){
		//第一步 
		a[i]=cycleMove(a[i]);
		//第三步
		a[i]=toLowerOrUpper(a[i]);
	}
	//调整执行顺序：第二步（整个字符一起处理） 
	for(int i=strlen(a)-1;i>=0;i--){
		cout<<a[i];
	}
    return 0;
}

