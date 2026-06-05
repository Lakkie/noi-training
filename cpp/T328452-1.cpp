#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int main()
{
	string s;
	stack<char> a;
	cin>>s;
	for(int i=0;i<s.size();i++){
		//左括号入栈 
		if(s[i]=='(' || s[i]=='['){
			a.push(s[i]);
		}
		//右括号检查匹配 
		else if(s[i]==')'){
			if(!a.empty()&&a.top()=='('){//特殊情况，如果第一个符号就是右括号，那么直接匹配不上。 
				a.pop();
			}else{
				a.push(s[i]);
				break;
			}
		}
		else if(s[i]==']'){
			if(!a.empty()&&a.top()=='['){//特殊情况，如果第一个符号就是右括号，那么直接匹配不上。 
				a.pop();
			}else{
				a.push(s[i]);
				break;
			}
		}
	}
	if(!a.empty()){
		cout<<"Wrong";
	}else{
		cout<<"OK";
	}
	return 0;
}
