#include <iostream>
using namespace std;

int change(int number){
	int arr[3]; 
	arr[0]=number%10; //��λ 
	arr[1]=number/10%10; //ʮλ
	arr[2]=number/100; //��λ
	//ð������ 
	for(int i=0;i<2;i++){
		for(int j=0;j<2-i;j++){
			//�������� 
			if(arr[j]>arr[j+1]){
				arr[j]=arr[j]+arr[j+1];
				arr[j+1]=arr[j]-arr[j+1];
				arr[j]=arr[j]-arr[j+1];
			}
		}
	}
	//�����-��С�� n1*100+n2*10+n3-n3*100-n2*10-n1�����ɣ�����ʡȥ�ڶ�λ���ļ��㣬���������ߵ�n2*10�����ˡ��� 
	return arr[2]*100+arr[0]-arr[0]*100-arr[2];
}

int main(){
	int n,r,c=0;
	cin>>n;
	r=n;
	do {
		r=change(r);
		c++;
	}while(r!=495);
	cout<<c<<endl; 
	return 0;
}

