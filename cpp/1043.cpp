#include <iostream>
using namespace std;
int main(){
	//注意：数据类型不相同，则无法比较。
	unsigned int x;
	int y;
	cin>>x>>y;
	//缩小数据范围，y比0小的时候一定x>y，x>=2^31的时候一定x>y. 
	if(y<0||x>=2147483648){
		cout<<">";
	}else{
		if(x>y){
			cout<<">";
		}else if(x==y){
			cout<<"=";
		}else{
			cout<<"<";
		}
	}
    return 0;
}
