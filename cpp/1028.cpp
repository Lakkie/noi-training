#include <iostream>
using namespace std;
int main(){
	char a;
	cin>>a;
	//���ζԽ��߳�5���ַ������Ժ�������Ŀ����ֱ�Ӹ����ֵ���� 
	int l=5,i,j,m,n;
	//�ϰ벿��
	m=l/2+1;
	for(i=1;i<=m;i++){
		//n-iΪ��ǰ�е�һ���ַ���ߵĿո���
        for(j=1;j<=m-i;j++){
        	cout<<' ';
		}
        //2*i-1Ϊ��ǰ�е��ַ���
        for(j=1;j<=2*i-1;j++){
        	cout<<a;
		}
        //����
        cout<<endl;
    }
	//�°벿��
	n=l/2;
	for(i=n;i>=1;i--){
		//n-iΪ��ǰ�е�һ���ַ���ߵĿո���
        for(j=1; j<=n-i+1; j++){
        	cout<<' ';
		}
        //2*i-1Ϊ��ǰ�е��ַ���
        for(j=1;j<=2*i-1;j++){
        	cout<<a;
		}
        //����
        cout<<endl;
    }
    return 0;
}
