#include <iostream>
using namespace std;

int change(int number){
	int arr[3]; 
	arr[0]=number%10; //个位 
	arr[1]=number/10%10; //十位
	arr[2]=number/100; //百位
	//冒泡排序 
	for(int i=0;i<2;i++){
		for(int j=0;j<2-i;j++){
			//变量交换 
			if(arr[j]>arr[j+1]){
				arr[j]=arr[j]+arr[j+1];
				arr[j+1]=arr[j]-arr[j+1];
				arr[j]=arr[j]-arr[j+1];
			}
		}
	}
	//最大数-最小数 n1*100+n2*10+n3-n3*100-n2*10-n1（规律：可以省去第二位数的计算，即减号两边的n2*10抵消了。） 
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

