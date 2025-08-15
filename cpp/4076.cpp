#include <iostream>
using namespace std;
int main(){
	int m;
	cin>>m;
	//ÐÐ 
	for(int i=0;i<m;i++){
		//ÁÐ 
		for(int j=0;j<m;j++){
			if(j==0||j==m-1){
				cout<<"+";
			}else{
				if(i==j){
					cout<<"+";
				}else{
					cout<<"-";
				}
			}
		}
		cout<<endl; //»»ÐÐ 
	}
	return 0;
}
