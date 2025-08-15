#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	//ÐÐ 
	for(int i=0;i<n;i++){
		//ÁÐ 
		for(int j=0;j<n;j++){
			if(j==0||j==n-1){
				cout<<"|";
			}else{
				if(i==0 || i==n/2 || i==n-1){
					cout<<"-";
				}else{
					cout<<"x";
				}
			}
		}
		cout<<endl; //»»ÐÐ 
	}
	return 0;
}
