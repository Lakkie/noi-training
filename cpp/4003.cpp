#include <iostream>
using namespace std;
int main(){
	int n;
	char c=65;
	cin>>n;
	//第一层循环代表行数 
	for(int i=1;i<=n;i++){
		//第二层循环代表每行的字符数 
		for(int j=1;j<=i;j++){
			if(c>90){
				c=65;
			}
			cout<<c;
			c++;
		}
		cout<<endl;
	}
    return 0;
}
