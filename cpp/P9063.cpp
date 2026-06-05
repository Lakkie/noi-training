#include<iostream>
using namespace std;
int main(){
	//ÊäÈë 
    int n;
    cin>>n;
	int a[n]={0};
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//Êä³ö
    for(int i=0;i<n;i++){
		if(a[i]%2==0){
			cout<<"No"<<endl;
		}else{
			cout<<"Yes"<<endl;
		}
	}
    return 0;
}
