#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	//��һ��ѭ�������д����ӵ�0�е���n-1�С� 
	for(int i=0;i<n;i++){
		//�ڶ���ѭ�������д����ӵ�0�е���n-1�С� 
		for(int j=0;j<n;j++){
			//���� 
			if(i==j||i+j==n-1){
				cout<<"+"; 
			}else{
				cout<<"-";
			}
		}
		//��ǰ�е�ÿ���ַ���������Ϻ󣬼ǵû��С� 
		cout<<endl; 
	}
	return 0;
}
