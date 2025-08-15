#include <iostream>
using namespace std;
int main(){
	int n,x,y,k;
	cin>>n>>x>>y;
	if(y%x==0){
		//恰好整点吃完苹果。 
		k=y/x;
	}else{
		//有苹果吃了一点，但还没有吃完。 
		k=y/x+1;
	}
	int r=n-k;
	//整箱苹果全部吃完了，就没法再吃了。（不可能小于0） 
	if(r<0){
		r=0;
	}
	cout<<r<<endl;
    return 0;
}
