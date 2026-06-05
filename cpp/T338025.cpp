#include<iostream>
#include<stack>
using namespace std;
int main(){
	int a;
	cin>>a;
	stack<int> a8;
	while(a!=0){
		a8.push(a%8);
		a=a/8;
	}
	while(!a8.empty()){
		cout<<a8.top();
		a8.pop();
	}
	return 0;
}
