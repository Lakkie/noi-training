#include <iostream>
#include <cmath> 
using namespace std;
int main(){
	int a,b,ct=0;
	cin>>a>>b;
	//��һ��ѭ�������a����b�� 
	for(int i=a;i<=b;i++){
		//Ĭ�ϵ�ǰ����i�������� 
		bool f=true;
		//�ڶ���ѭ�������жϵ�ǰ����i�ǲ���������(С���ɣ��ÿ�ƽ����������ѭ���Ĵ���) 
		for(int j=2;j<=sqrt(i);j++){
			//������ֵ�ǰ����i���Ա�����������������������жϳ�������������� 
			if(i%j==0){
				f=false;
				//���жϽ����֮�󣬺�����ѭ����Ҫ���Ե�����break������ǰ�ĵڶ���ѭ���� 
				break;
			}
		}
		//��ǰ����i�ǲ����������Ǿ�ͳ����ct��1�� 
		if(f){
			ct++;
		}
	} 
	cout<<ct;
    return 0;
}
