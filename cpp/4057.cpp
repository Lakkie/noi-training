#include <iostream>
using namespace std;
int main(){
	int h,m,s,k;
	cin>>h>>m>>s>>k;
	//�ȼ�����
	s=s+k%60;
	//��60���λ1���� 
	if(s>=60){
		s=s-60;
		m=m+1;
	}
	//�ټ������
	m=m+k/60%60;
	//��60���ӽ�λ1Сʱ 
	if(m>=60){
		m=m-60;
		h=h+1;
	}
	h=h+k/3600;
	cout<<h<<' '<<m<<' '<<s<<endl; 
    return 0;
}
