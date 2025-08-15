#include <iostream>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	//数学公式推导： 
	//ji+tu=x     (1)
	//2ji+4tu=y   (2)
	//(1)式*4 - (2)式 得到ji的数量为(x*4-y)/2
	//(2)式 - (1)式*2 得到tu的数量为(y-x*2)/2
	cout<<(x*4-y)/2<<' '<<(y-x*2)/2<<endl;
    return 0;
}
