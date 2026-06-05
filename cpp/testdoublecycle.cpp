#include<iostream>
using namespace std;
int main(){
	for(int i=0;i<3;i++){
		cout<<"L1 "<<i<<endl;
		for(int i=0;i<3;i++){
			cout<<"L2 "<<i<<endl;
		}
	}
	return 0;
}
