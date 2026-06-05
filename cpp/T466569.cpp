#include<iostream>
using namespace std;
int main(){
	long a,b,c;
	cin>>a>>b>>c;
	if(a+b==c){
		cout<<"plus";
	}else if(a-b==c){
		cout<<"minus";
	}else{
		cout<<"illegal";
	}	
} 
