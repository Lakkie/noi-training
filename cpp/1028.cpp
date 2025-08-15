#include <iostream>
using namespace std;
int main(){
	char a;
	cin>>a;
	//菱形对角线长5个字符。（以后其他题目可以直接改这个值。） 
	int l=5,i,j,m,n;
	//上半部分
	m=l/2+1;
	for(i=1;i<=m;i++){
		//n-i为当前行第一个字符左边的空格数
        for(j=1;j<=m-i;j++){
        	cout<<' ';
		}
        //2*i-1为当前行的字符数
        for(j=1;j<=2*i-1;j++){
        	cout<<a;
		}
        //换行
        cout<<endl;
    }
	//下半部分
	n=l/2;
	for(i=n;i>=1;i--){
		//n-i为当前行第一个字符左边的空格数
        for(j=1; j<=n-i+1; j++){
        	cout<<' ';
		}
        //2*i-1为当前行的字符数
        for(j=1;j<=2*i-1;j++){
        	cout<<a;
		}
        //换行
        cout<<endl;
    }
    return 0;
}
