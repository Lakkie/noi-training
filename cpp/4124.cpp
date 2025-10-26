#include <iostream>
using namespace std;
int main(){
	int l,r,count=0;
	cin>>l>>r;
	for(int x=1;x<=r;x*=2){
		//题目并未强调xy的大小顺序，此时可以使用y=1。1+2和2+1是算不同的组合。 
		//如果题目强调xy的大小顺序，则使用y=x。只有1+2，而2+1不会出现。 
		for(int y=x;y<=r;y*=2){
			if(x+y>=l&&x+y<=r){
				count++;
			}
		}
	}
	cout<<count<<endl;
    return 0;
}


