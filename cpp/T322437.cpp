#include<iostream>
using namespace std;
int main(){
	//ÊäÈë 
	int n;
	cin>>n;
	double p=0;
	for(int i=0;i<n;i++){
		int c;
		cin>>c;
		if(c%70==0){
			p+=0.1*c/70;
		}else{
			p+=0.1*(c/70+1);
		}
	}
	cout<<p;
	return 0;
}
