#include <iostream>
using namespace std;
int main(){
	int m,n;
	cin>>m;
	//��һ��ѭ������ӵ�1�����ִ�����m�����֡� 
	for(int i=1;i<=m;i++){
		cin>>n;
		//bt����ǰ���ֵ�λ����ct����ǰ���ֵĸ�λ����N�η�֮�͡� 
		int bt=0,ct=0;
		//��ΪҪ�����Σ�����������һ����ʱ����������������n 
		int t1=n;
		//ͳ��λ��
		while(t1>0){
			bt++;
			t1=t1/10;
		}
		int t2=n;
		//ͳ�Ƹ�λ����N�η�֮��
		while(t2>0){
			//��ǰ����
			int c=t2%10;
			int cn=1;
			//��ǰ���ֵ�bt�η��� 
			for(int j=1;j<=bt;j++){
				cn=cn*c;
			}
			//bt�η�֮��
			ct=ct+cn;
			//��һλ���֡� 
			t2=t2/10;
		}
		//�жϵ�ǰ���ֵ�����Ч��
		if(ct==n){
			cout<<"T"<<endl;
		}else{
			cout<<"F"<<endl;
		}
	}
    return 0;
}
