#include<iostream>
#include<stack>
using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	stack<char> nx;
	while(n!=0){
		if(n%x<=9){
			nx.push(n%x+'0');
		}else if(n%x>9){
			nx.push(n%x+'A'-10);
		}
		n=n/x;
	}
	while(!nx.empty()){
		cout<<nx.top();
		nx.pop();
	}
	return 0;
}
