#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	//数字不重复的3位数里，最小的是123，最大的是987。 
	for(int i=123;i<=329;i++){
		int a=i,b=2*i,c=3*i;
		int m=i,n=2*i,o=3*i;
		//所有三位数拼成一个字符串。
		string s=to_string(a)+to_string(b)+to_string(c);
		//字符串排序（默认顺序是从小到大） 
		sort(s.begin(),s.end());
		//如果数字不重复就会排序成123456789。 
		if(s=="123456789") cout<<a<<" "<<b<<" "<<c<<endl;
	} 
	return 0;
}
