#include <iostream>
using namespace std;
int main(){
	int n,x,y,k;
	cin>>n>>x>>y;
	if(y%x==0){
		//ǡ���������ƻ���� 
		k=y/x;
	}else{
		//��ƻ������һ�㣬����û�г��ꡣ 
		k=y/x+1;
	}
	int r=n-k;
	//����ƻ��ȫ�������ˣ���û���ٳ��ˡ���������С��0�� 
	if(r<0){
		r=0;
	}
	cout<<r<<endl;
    return 0;
}
