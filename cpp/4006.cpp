#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,s=0;
	cin>>n;
	//第一个循环代表n次项括号 
	for(int i=1;i<=n;i++){
		//第二个循环代表单项累加，且只需要加到i的位置即可 
		for(int j=1;j<=i;j++){
			s+=j;
		} 
	}
	cout<<s<<endl;
    return 0;
}
