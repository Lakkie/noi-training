#include <iostream>
using namespace std;
int main(){
	//ע�⣺�������Ͳ���ͬ�����޷��Ƚϡ�
	unsigned int x;
	int y;
	cin>>x>>y;
	//��С���ݷ�Χ��y��0С��ʱ��һ��x>y��x>=2^31��ʱ��һ��x>y. 
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
