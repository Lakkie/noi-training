#include <iostream>
using namespace std;
int main(){
	int k,l,r,s=0;
	cin>>k>>l>>r;
	for(int i=l;i<=r;i++){
		//���ж�β��Ϊk���� 
		if(i%10==k){
			s+=i;
		//���ж��ܱ�k�������� ������ʹ��else if���Ա����ظ�ͳ�Ƽ�����β��Ϊk�������ܱ�k���������֣� 
		}else if(i%k==0){
			s+=i;
		}
	}
	cout<<s<<endl; 
    return 0;
}
