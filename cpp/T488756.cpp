#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){
	string s;
	while(getline(cin,s)){
		stack<char> st;
		for(int i=0;i<s.size();i++){
			if(s[i]=='('){ 
				st.push(s[i]);
			}else if(s[i]==')'){
				st.pop(); 
			}else if(s[i]=='B'){
				cout<<st.size()<<endl;
			}else{
				cout<<"exceptional case:"<<s[i]<<"."<<endl;
			}
		}	
	}
	return 0;
}

