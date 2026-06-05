#include<iostream>
#include<stack>
using namespace std;
int main(){
	int m,n,s=0;
	string p;
	cin>>n>>p>>m;
	for(int i=0;i<p.length();i++){//n进制转10进制。 
		char t=p[i];
		if(t>='0'&&t<='9'){
			s=s*n+p[i]-'0';
		}else if(t>='A'&&t<='F'){
			s=s*n+p[i]-'A'+10;
		}else{
			//do nothing.
		}
	}
	stack<char> a;
	while(s!=0){//10进制转m进制。 
		int c=s%m;
		if(c>=0&&c<=9){
			a.push(c+'0');
		}else if(c>=10){
			a.push(c+'A'-10);
		}else{
			//do nothing.
		}
		s=s/m;
	}
	int l=a.size(); 
	for(int i=0;i<l;i++){
		cout<<a.top();
		a.pop();
	} 
	return 0;
}
