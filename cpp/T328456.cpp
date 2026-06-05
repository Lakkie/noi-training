#include<iostream>
#include<stack>
using namespace std;
bool is_match(char a,char b){
	return (a=='<'&&b=='>')||(a=='('&&b==')')||(a=='['&&b==']')||(a=='{'&&b=='}');
}
int define_order(char a){
	if(a=='{'){
		return 4;
	}else if(a=='['){
		return 3;
	}else if(a=='('){
		return 2;
	}else if(a=='<'){
		return 1;
	}
}
bool is_order(char a,char b){
	return define_order(a)>=define_order(b);
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		stack<char> st;
		for(int j=0;j<s.size();j++){
			if(st.empty()){//栈内没有元素的时候，直接push进去。 
				st.push(s[j]);
			}else{
				if(is_match(st.top(), s[j])){//符号匹配。 
					st.pop(); 
				}else{//符号不匹配。 
					if(is_order(st.top(), s[j])){//不匹配，且按顺序包含。 
						st.push(s[j]);//继续入栈。 
					}else{//不匹配，且没按顺序包含。 
						break;//直接结束循环。 
					} 
				}
			}
		}
		if(st.empty()){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
