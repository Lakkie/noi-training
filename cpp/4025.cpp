#include <iostream>
using namespace std;
int main(){
	int x,n,w;
	cin>>x>>n;
	w=(x+n)%7;
	if(w==0){
		cout<<7<<endl; 
	}else{
		cout<<w<<endl;
	}
    return 0;
}
