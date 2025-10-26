#include <iostream>
using namespace std;
int main(){
	double a,b;
	char m;
	cin>>a>>b>>m;
		if(m=='+'){
			cout<<a+b;
		}
		else if(m=='-'){
			cout<<a-b;
		}
		else if(m=='*'){
			cout<<a*b;
		}
		else if(m=='/'){
			if(b!=0){
				cout<<a/b;
			}
			else{
				cout<<"Divided by zero!"<<endl;
			}
		}
		else{
			cout<<"Invalid operator!"<<endl;
		}
    return 0;
}
