#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,s=0;
	cin>>n;
	//��һ��ѭ������n�������� 
	for(int i=1;i<=n;i++){
		//�ڶ���ѭ���������ۼӣ���ֻ��Ҫ�ӵ�i��λ�ü��� 
		for(int j=1;j<=i;j++){
			s+=j;
		} 
	}
	cout<<s<<endl;
    return 0;
}
