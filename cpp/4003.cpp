#include <iostream>
using namespace std;
int main(){
	int n;
	char c=65;
	cin>>n;
	//��һ��ѭ���������� 
	for(int i=1;i<=n;i++){
		//�ڶ���ѭ������ÿ�е��ַ��� 
		for(int j=1;j<=i;j++){
			if(c>90){
				c=65;
			}
			cout<<c;
			c++;
		}
		cout<<endl;
	}
    return 0;
}
