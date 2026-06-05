#include<iostream>
using namespace std;
//ตÝน้ 
void f(int d,char g1,char g2,char g3){
	if(d==1){
		cout<<g1<<"->"<<d<<"->"<<g3<<endl;
	}else{
		f(d-1,g1,g3,g2);
		cout<<g1<<"->"<<d<<"->"<<g3<<endl;
		f(d-1,g2,g1,g3);
	}
}
int main(){
    int d;
    char g1,g2,g3;
    cin>>d>>g1>>g2>>g3;
    f(d,g1,g2,g3);
    return 0;
}
