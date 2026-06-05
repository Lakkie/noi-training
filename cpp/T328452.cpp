#include<iostream>
#include<stack>
using namespace std;
//定义一个函数用来匹配左右括号 
bool is_match(char a,char b){
	return (a=='<'&&b=='>')||(a=='('&&b==')')||(a=='['&&b==']')||(a=='{'&&b=='}');
}
int main(){
	//输入 
	string s;
	cin>>s;
	//用于存放左括号。使用栈的特性后进先出，可以逐个匹配右括号。 
	stack<char> st;
	for(int i=0;i<s.size();i++){
		if(st.empty()){//栈内没有元素的时候，直接push进去。 
			st.push(s[i]);
		}else{
			if(is_match(st.top(), s[i])){//符号匹配。 
				st.pop();//匹配上的左括号直接去掉。 
			}else{//符号不匹配。 
				st.push(s[i]);//继续入栈。 
			}
		}
	}
	if(st.empty()){//栈为空，代表全部括号匹配上了。 
		cout<<"OK"<<endl;
	}else{
		cout<<"Wrong"<<endl;
	}
	return 0;
}
