#include <iostream>
using namespace std;
int main(){
	char s;
	cin>>s;
	//�����εĸ߶�
    int height=3;
    //�����εĵױ߳���
    int width=5;
    //���ѭ����������
    for (int i=0;i<height;i++){
        //����ÿ�д�ӡ���Ǻ����������м�һ�У�ÿ�е��Ǻ�������������1��ʼ����
        int stars=2*i+1;
        //����ÿ��ǰ��Ҫ��ӡ�Ŀո��������߿ո������
        int spaces=(width-stars)/2;
        //�ڲ�ѭ�����ȴ�ӡ�ո��ٴ�ӡ�Ǻ�
        for(int j=0;j<spaces;j++){
        	//��ӡ�ո�
            cout<<" ";
        }
        for(int k=0;k<stars;k++){
        	//��ӡ�ǺŻ�����ַ�
            cout<<s;
        }
        //����׼����ӡ��һ��
        cout<<endl;
    }
    return 0;
}
