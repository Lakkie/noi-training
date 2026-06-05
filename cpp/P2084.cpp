#include<iostream>
using namespace std;
int main(){
	int m,l;
	string n; 
	cin>>m>>n;
	l=n.size();
	for(int i=0;i<l;i++){
		char t=n[i];
		if(t!='0'){
			if(i!=0){
				cout<<"+";//最后一段没有+号。 
			}else{
				//do nothing.
			}
			cout<<t<<"*"<<m<<"^"<<l-i-1;
		}else{
			//do nothing.
		}
	}
	return 0;
}
