#include <iostream>
using namespace std;
int main(){
	//数组a存奇数，数组b存偶数，al实际输入的奇数个数，bl实际输入的偶数个数。 
	int a[10]={0}, b[10]={0}, al=0, bl=0; 
	for(int i=0;i<10;i++){
		int t;
		cin>>t;
		if(t%2==0){//偶数 
			b[bl]=t;
			bl++;
		}else{//奇数 
			a[al]=t;
			al++;
		}
	}
	//奇数排序 
	for(int i=0;i<al-1;i++){
		for(int j=0;j<al-1-i;j++){
			if(a[j]<a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	//偶数排序 
	for(int i=0;i<bl-1;i++){
		for(int j=0;j<bl-1-i;j++){
			if(b[j]>b[j+1]){
				int temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	//输出奇数 
	for(int i=0;i<al;i++){
		cout<<a[i]<<" "; 
	}
	//输出偶数 
	for(int i=0;i<bl;i++){
		cout<<b[i]<<" "; 
	}
	return 0;
} 
