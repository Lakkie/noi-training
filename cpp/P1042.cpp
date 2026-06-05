#include <iostream>
#include <cmath>
using namespace std;
int main(){
	//输入 
	string s;
	char c;
	while(cin>>c){
		if(c=='E') break;
		s+=c;
	}
	int a=0,b=0;
	//11分制 
	for(int i=0;i<s.size();i++){
		char t = s[i];
	    if(t=='W') a+=1;
	    if(t=='L') b+=1;
	    if(abs(a-b)>=2&&max(a,b)>=11){
	        cout<<a<<":"<<b<<endl;
	        a=0;
			b=0;
	    }
	}
	if(a!=0||b!=0){
		cout<<a<<":"<<b<<endl;
		a=0;
		b=0;	
	}
	cout<<endl;
	//21分制 
	for(int i=0;i<s.size();i++){
		char t = s[i];
	    if(t=='W') a+=1;
	    if(t=='L') b+=1;
	    if(abs(a-b)>=2&&max(a,b)>=21) {
	        cout<<a<<":"<<b<<endl;
	        a=0;
			b=0;
	    }
	}
	if(a!=0||b!=0){
		cout<<a<<":"<<b<<endl;
		a=0;
		b=0;	
	}
	return 0;
}
